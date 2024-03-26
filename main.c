#include <stdio.h>
#include <secp256k1.h>
#include <secp256k1_extrakeys.h>
#include <secp256k1_schnorrsig.h>

int main(int argc, char **argv) {
	int i = 0;
	unsigned char seckey[32];
	unsigned char randomize[32];
	unsigned char auxiliary_rand[32];
	unsigned char serialized_pubkey[32];
	secp256k1_xonly_pubkey pubkey;
	secp256k1_keypair keypair;

	printf("args %d\n", argc);

	for(i = 0; i < argc; i++)
		printf("argc[%d]: %s\n", i, argv[i]);
}
