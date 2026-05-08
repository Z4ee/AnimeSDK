#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_BILLBOARDASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2EBEB0)
#define UNITYENGINE_BILLBOARDASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EBE50)

namespace UnityEngine
{
	inline static constexpr unsigned int BillboardAsset_TypeDefinitionIndex = 5173;

	class BillboardAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BILLBOARDASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::BillboardAsset* obj)
		{
			return ((::System::Void(*)(::UnityEngine::BillboardAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_BILLBOARDASSET_INTERNAL_CREATE_OFFSET))(obj);
		}
	};
}
