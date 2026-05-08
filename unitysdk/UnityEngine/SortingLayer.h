#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_SORTINGLAYER_GETLAYERVALUEFROMID_OFFSET UNITYSDK_OFFSET(0x1B4DF110)
#define UNITYENGINE_SORTINGLAYER_NAMETOID_OFFSET UNITYSDK_OFFSET(0x1B4DF120)

namespace UnityEngine
{
	inline static constexpr unsigned int SortingLayer_TypeDefinitionIndex = 5124;

	struct alignas(4) SortingLayer
	{
		::System::Int32 m_Id; // 0x10

		static ::System::Int32 GetLayerValueFromID(::System::Int32 id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_GETLAYERVALUEFROMID_OFFSET))(id);
		}

		static ::System::Int32 NameToID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SORTINGLAYER_NAMETOID_OFFSET))(name);
		}
	};
}
