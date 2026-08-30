#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_FILLDATA_OFFSET UNITYSDK_OFFSET(0x3BACBA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3BACB20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EAB73A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EAB7390)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPointsSample_TypeDefinitionIndex = 44698;

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
