#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_FILLDATA_OFFSET UNITYSDK_OFFSET(0x3874F40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3874EC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B0466E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B0466D0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPointsSample_TypeDefinitionIndex = 41656;

	struct alignas(8) aiPointsSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiPointsSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_GETSUMMARY_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void FillData(::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiPointsData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiPointsData>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_FILLDATA_OFFSET))(this, a1);
		}
		*/
	};
}
