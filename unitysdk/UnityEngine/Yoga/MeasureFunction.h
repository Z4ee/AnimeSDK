#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"
#include "unitysdk/UnityEngine/Yoga/YogaSize.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_MEASUREFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D015870)
#define UNITYENGINE_YOGA_MEASUREFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D015950)
#define UNITYENGINE_YOGA_MEASUREFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D0151C0)
#define UNITYENGINE_YOGA_MEASUREFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D013380)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int MeasureFunction_TypeDefinitionIndex = 28032;

	class MeasureFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Yoga::YogaSize Invoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_INVOKE_OFFSET))(this, node, width, widthMode, height, heightMode);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_BEGININVOKE_OFFSET))(this, node, width, widthMode, height, heightMode, callback, object);
		}

		::UnityEngine::Yoga::YogaSize EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Yoga::YogaSize(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
