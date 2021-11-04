#include <vector>
#include <ctime>
#include <iostream>

#include "Blockchain.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

//main function with parameters
void main(array<String^> ^args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	//name of project: BlockchainDemo Name of the form: MyForm
	BlockChainDemo::MyForm frm;
	Application::Run(% frm);

	struct transactionData {
		double amount;
		std::string senderKey;
		std::string receiverKey;
		time_t timestamp;
		
	};
	

	

	class Block {
	private:
		int index;
		size_t blockHash;
		size_t previousHash;
		size_t generateHash();


	public:
		//costructor
		Block(int idx, transactionData d, size_t prevHash);

		//get Original Hash
		size_t getHash();

		//get prev hash
		size_t getPreviousHash();

		//transaction data member
		transactionData data;

		//validate hash
		bool isHashValid();


	};

	//Constructor with parameter
	//Block::Block(int idx, transactionData d, size_t prevHash) {
	//	index = idx;
	//	data = d;
	//	previousHash = prevHash;

	}

	//Blockchain class
	class Blockchain {
	private:
		//Block createGenesisBlock();



	public:
		//std::vector<Block> chain;

		//constructor
		Blockchain();

		//public functions
		//void addBlock(transactionData data);
		void isChainValid();

		//contrived Example for demo only
		//Block* getLastBlock();

	};

/*	//Blockchaincode
	//name of the coin of the blockchain
	Blockchain pazCoin;


	//First block data
	time_t data1Time;
	TransactionData data1(1.5, "Sher", "Jo", time(&data1Time));
	pazCoin.addBlock(data1);
	
	 

}*/