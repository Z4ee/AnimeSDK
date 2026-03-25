#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_BASELINEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18AE5640)
#define UNITYENGINE_YOGA_BASELINEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18AE56C0)
#define UNITYENGINE_YOGA_BASELINEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18AE5000)
#define UNITYENGINE_YOGA_BASELINEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE4FE0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int BaselineFunction_TypeDefinitionIndex = 5829;

	class BaselineFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::System::Single height)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_INVOKE_OFFSET))(this, node, width, height);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::System::Single height, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_BEGININVOKE_OFFSET))(this, node, width, height, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
