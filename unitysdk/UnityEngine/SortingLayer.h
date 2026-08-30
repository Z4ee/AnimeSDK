#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_SORTINGLAYER_GETLAYERVALUEFROMID_OFFSET UNITYSDK_OFFSET(0x1ED65260)
#define UNITYENGINE_SORTINGLAYER_IDTONAME_OFFSET UNITYSDK_OFFSET(0x1ED65280)
#define UNITYENGINE_SORTINGLAYER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1ED65290)
#define UNITYENGINE_SORTINGLAYER_NAMETOID_OFFSET UNITYSDK_OFFSET(0x1ED65270)

namespace UnityEngine
{
	inline static constexpr unsigned int SortingLayer_TypeDefinitionIndex = 4021;

	struct alignas(4) SortingLayer
	{
		::System::Int32 m_Id; // 0x10

		static ::System::Int32 GetLayerValueFromID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GETLAYERVALUEFROMID_OFFSET))(a1);
		}

		static ::System::Int32 NameToID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_NAMETOID_OFFSET))(a1);
		}

		static ::System::String* IDToName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_IDTONAME_OFFSET))(a1);
		}

		static ::System::Boolean IsValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_ISVALID_OFFSET))(a1);
		}
	};
}
