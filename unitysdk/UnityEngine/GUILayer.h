#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GUILAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F015B90)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayer_TypeDefinitionIndex = 6674;

	class GUILayer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYER__CTOR_OFFSET))(this);
		}
	};
}
