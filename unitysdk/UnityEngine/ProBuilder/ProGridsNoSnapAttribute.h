#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROBUILDER_PROGRIDSNOSNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1776F660)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProGridsNoSnapAttribute_TypeDefinitionIndex = 41608;

	class ProGridsNoSnapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROGRIDSNOSNAPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
