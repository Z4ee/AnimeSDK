#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ZzzFluid_WindSourceType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_WINDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1A210)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ZzzFluid_WindSource_TypeDefinitionIndex = 27535;

	class ZzzFluid_WindSource : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::ZzzFluid_WindSourceType Type; // 0x10
		::UnityEngine::Transform* SourceContainer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* RendersInContainer; // 0x20
		::UnityEngine::Renderer* Renderer; // 0x28
		::System::Boolean useRawMaterial; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ZZZFLUID_WINDSOURCE__CTOR_OFFSET))(this);
		}
	};
}
