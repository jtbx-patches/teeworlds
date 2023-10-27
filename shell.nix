{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
	nativeBuildInputs = with pkgs.buildPackages; [
		bmake
		clang
		cmake
		freetype
		python3
		SDL2
		sqlite
	];
	shellHook = "alias make=bmake";
}
