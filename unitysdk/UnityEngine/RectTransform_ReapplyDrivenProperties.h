#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CDFA670)
#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CDFA6A0)
#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CDFA2B0)
#define UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFA600)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_ReapplyDrivenProperties_TypeDefinitionIndex = 4393;

	class RectTransform_ReapplyDrivenProperties : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::RectTransform* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REAPPLYDRIVENPROPERTIES_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
