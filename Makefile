.PHONY: all
MAKEFLAGS += --silent

all: help

help:
	@grep -E '^[a-zA-Z1-9\._-]+:.*?## .*$$' $(MAKEFILE_LIST) \
		| sort \
		| sed -e "s/^Makefile://" -e "s///" \
		| awk 'BEGIN { FS = ":.*?## " }; { printf "\033[36m%-30s\033[0m %s\n", $$1, $$2 }'
internal:
	mkdir -p internal
	cd internal && wit-bindgen c ../wit && cd ..
setup: internal ## setup development environment

build: setup ## build component
	$(CC) dc_component.c internal/data_collection.c internal/data_collection_component_type.o -o dc_component_temp.wasm -mexec-model=reactor
	wasm-tools component new ./dc_component_temp.wasm  -o dc_component.wasm
	rm -rf dc_component_temp.wasm

clean: ## clean build artifacts
	rm -rf dc_component.wasm
	rm -rf dc_component_temp.wasm
	rm -rf internal/
