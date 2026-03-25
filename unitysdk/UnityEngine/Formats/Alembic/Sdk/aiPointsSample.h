#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_FILLDATA_OFFSET UNITYSDK_OFFSET(0x21068D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x2106850)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x187A8100)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x187A80F0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPointsSample_TypeDefinitionIndex = 35002;

	struct alignas(8) aiPointsSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_OFFSET))(v);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_GETSUMMARY_OFFSET))(this, dst);
		}
		*/

		/*
		::System::Void FillData(::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiPointsData>* dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiPointsData>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_FILLDATA_OFFSET))(this, dst);
		}
		*/
	};
}
