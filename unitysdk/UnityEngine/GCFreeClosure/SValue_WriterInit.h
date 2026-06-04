#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT_DOINIT_OFFSET UNITYSDK_OFFSET(0x1B297BC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2974B0)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_WriterInit_TypeDefinitionIndex = 4452;

	class SValue_WriterInit : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT__CCTOR_OFFSET))();
		}

		static ::System::Void DoInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT_DOINIT_OFFSET))();
		}
	};
}
