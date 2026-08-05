#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnityEngine { class MonoBehaviour; }

#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E265550)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectComponentHandler_TypeDefinitionIndex = 27131;

	class RedirectComponentHandler : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* _value; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENTHANDLER__CTOR_OFFSET))(this);
		}
	};
}
