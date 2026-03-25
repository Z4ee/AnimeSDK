#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int DateTimeParse_DS_TypeDefinitionIndex = 257;

	enum class DateTimeParse_DS : ::System::Int32
	{
		BEGIN = 0,
		N = 1,
		NN = 2,
		D_Nd = 3,
		D_NN = 4,
		D_NNd = 5,
		D_M = 6,
		D_MN = 7,
		D_NM = 8,
		D_MNd = 9,
		D_NDS = 10,
		D_Y = 11,
		D_YN = 12,
		D_YNd = 13,
		D_YM = 14,
		D_YMd = 15,
		D_S = 16,
		T_S = 17,
		T_Nt = 18,
		T_NNt = 19,
		ERROR = 20,
		DX_NN = 21,
		DX_NNN = 22,
		DX_MN = 23,
		DX_NM = 24,
		DX_MNN = 25,
		DX_DS = 26,
		DX_DSN = 27,
		DX_NDS = 28,
		DX_NNDS = 29,
		DX_YNN = 30,
		DX_YMN = 31,
		DX_YN = 32,
		DX_YM = 33,
		TX_N = 34,
		TX_NN = 35,
		TX_NNN = 36,
		TX_TS = 37,
		DX_NNY = 38,
	};
}
