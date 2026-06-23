#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class EventTriggerMarker; }
namespace UnityEngine::Timeline { class IMarker; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9AE0)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9B20)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__PROCESSFRAME_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5A9B30)
#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__PROCESSFRAME_B__23_1_OFFSET UNITYSDK_OFFSET(0x1E5A9BA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupBehavior___c_TypeDefinitionIndex = 32346;

	class ImgSplitScreenGroupBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::EventTriggerMarker*, ::System::Boolean>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::UnityEngine::Timeline::EventTriggerMarker*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ImgSplitScreenGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x26870);
		}
		static ::UnityEngine::Timeline::ImgSplitScreenGroupBehavior___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::ImgSplitScreenGroupBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(ImgSplitScreenGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x26878);
		}
		static ::System::Func_2<::UnityEngine::Timeline::IMarker*, ::UnityEngine::Timeline::EventTriggerMarker*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::IMarker*, ::UnityEngine::Timeline::EventTriggerMarker*>**)Il2CppClass::FromTypeDefinitionIndex(ImgSplitScreenGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x26880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::EventTriggerMarker* _ProcessFrame_b__23_0(::UnityEngine::Timeline::IMarker* e)
		{
			return ((::UnityEngine::Timeline::EventTriggerMarker*(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__PROCESSFRAME_B__23_0_OFFSET))(this, e);
		}

		::System::Boolean _ProcessFrame_b__23_1(::UnityEngine::Timeline::EventTriggerMarker* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::EventTriggerMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPBEHAVIOR___C__PROCESSFRAME_B__23_1_OFFSET))(this, e);
		}
	};
}
