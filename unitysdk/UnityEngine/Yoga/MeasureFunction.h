#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_MEASUREFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D624DE0)
#define UNITYENGINE_YOGA_MEASUREFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D624EC0)
#define UNITYENGINE_YOGA_MEASUREFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D624DA0)
#define UNITYENGINE_YOGA_MEASUREFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D624CB0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int MeasureFunction_TypeDefinitionIndex = 5857;

	class MeasureFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Yoga::YogaSize Invoke(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::UnityEngine::Yoga::YogaMeasureMode a3, ::System::Single a4, ::UnityEngine::Yoga::YogaMeasureMode a5)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Yoga::YogaNode* a1, ::System::Single a2, ::UnityEngine::Yoga::YogaMeasureMode a3, ::System::Single a4, ::UnityEngine::Yoga::YogaMeasureMode a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Yoga::YogaSize EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
