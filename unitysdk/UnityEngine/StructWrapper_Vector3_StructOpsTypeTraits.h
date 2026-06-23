#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_STRUCTOPSTYPETRAITS_GET_CANZEROCREATE_OFFSET UNITYSDK_OFFSET(0x1D1AC2A0)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1D1AC290)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC270)

namespace UnityEngine
{
	inline static constexpr unsigned int StructWrapper_Vector3_StructOpsTypeTraits_TypeDefinitionIndex = 27663;

	class StructWrapper_Vector3_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}

		::System::Boolean get_CanZeroCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_STRUCTOPSTYPETRAITS_GET_CANZEROCREATE_OFFSET))(this);
		}
	};
}
