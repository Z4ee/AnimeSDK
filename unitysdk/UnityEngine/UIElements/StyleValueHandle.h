#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueType.h"

#define UNITYENGINE_UIELEMENTS_STYLEVALUEHANDLE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x325570)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueHandle_TypeDefinitionIndex = 28207;

	struct alignas(4) StyleValueHandle
	{
		::UnityEngine::UIElements::StyleValueType m_ValueType; // 0x10
		::System::Int32 valueIndex; // 0x14

		::UnityEngine::UIElements::StyleValueType get_valueType()
		{
			return ((::UnityEngine::UIElements::StyleValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEHANDLE_GET_VALUETYPE_OFFSET))(this);
		}
	};
}
