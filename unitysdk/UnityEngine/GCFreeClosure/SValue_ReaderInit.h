#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT_DOINIT_OFFSET UNITYSDK_OFFSET(0x1C17B0E0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C17A9B0)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_ReaderInit_TypeDefinitionIndex = 4455;

	class SValue_ReaderInit : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT__CCTOR_OFFSET))();
		}

		static ::System::Void DoInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_READERINIT_DOINIT_OFFSET))();
		}
	};
}
