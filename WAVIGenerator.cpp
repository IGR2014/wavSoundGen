/////////////////////////////////////////////////////////
//
//	Name:		WAVIGenerator.cpp
//
//	Copyright:	Igor Baklykov � 2017
//
//	Author:		Igor Baklykov
//
//	Date:		09.04.2017 20:01
//
//	Description:	WAVE file generator interface
//			class definition
//
/////////////////////////////////////////////////////////


#include "WAVIGenerator.hpp"


// C-tor
WAVIGenerator::WAVIGenerator() : frequency(0.0), sampleRate(48000), byteRate(2) {};

// Copy c-tor
WAVIGenerator::WAVIGenerator(const WAVIGenerator &_g) {

	if (&_g != this) {

		frequency	= _g.frequency;
		sampleRate	= _g.sampleRate;
		byteRate	= _g.byteRate;

	}

};

// Move c-tor
WAVIGenerator::WAVIGenerator(WAVIGenerator &&_g) {

	if (&_g != this) {

		frequency	= _g.frequency;
		sampleRate	= _g.sampleRate;
		byteRate	= _g.byteRate;

		_g.frequency	= 0.0;
		_g.sampleRate	= 48000;
		_g.byteRate	= 0;

	}

};

// D-tor
WAVIGenerator::~WAVIGenerator() {

	frequency	= 0.0;
	sampleRate	= 0;
	byteRate	= 0;

}

