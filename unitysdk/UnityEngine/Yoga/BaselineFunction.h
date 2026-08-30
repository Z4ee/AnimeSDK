#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_BASELINEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EE00E50)
#define UNITYENGINE_YOGA_BASELINEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EE00ED0)
#define UNITYENGINE_YOGA_BASELINEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EE00E30)
#define UNITYENGINE_YOGA_BASELINEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE00D40)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int BaselineFunction_TypeDefinitionIndex = 5856;

	class BaselineFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
