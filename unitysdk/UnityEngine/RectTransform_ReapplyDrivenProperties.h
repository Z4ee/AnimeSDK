#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC21CE0)
#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC21D10)
#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC217E0)
#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC217D0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_ReapplyDrivenProperties_TypeDefinitionIndex = 5412;

	class RectTransform_ReapplyDrivenProperties : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::RectTransform* driven)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_INVOKE_OFFSET))(this, driven);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::RectTransform* driven, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_BEGININVOKE_OFFSET))(this, driven, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
