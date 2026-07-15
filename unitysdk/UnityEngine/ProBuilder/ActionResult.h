#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/ActionResult_Status.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_ACTIONRESULT_FROMBOOL_OFFSET UNITYSDK_OFFSET(0xC03E010)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_NOSELECTION_OFFSET UNITYSDK_OFFSET(0xC03E0E0)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_NOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC03DFC0)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC03DFA0)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0xC03E090)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_USERCANCELED_OFFSET UNITYSDK_OFFSET(0xC03E130)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xC03DFF0)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_SET_NOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC03DFD0)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC03DFB0)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT_TOBOOL_OFFSET UNITYSDK_OFFSET(0xC03E000)
#define UNITYENGINE_PROBUILDER_ACTIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC03DFE0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ActionResult_TypeDefinitionIndex = 41523;

	class ActionResult : public ::System::Object
	{
	public:
		::System::String* _notification_k__BackingField; // 0x10
		::UnityEngine::ProBuilder::ActionResult_Status _status_k__BackingField; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::ActionResult_Status a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ActionResult_Status, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ProBuilder::ActionResult_Status get_status()
		{
			return ((::UnityEngine::ProBuilder::ActionResult_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_status(::UnityEngine::ProBuilder::ActionResult_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ActionResult_Status))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_SET_STATUS_OFFSET))(this, a1);
		}

		::System::String* get_notification()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_NOTIFICATION_OFFSET))(this);
		}

		::System::Void set_notification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_SET_NOTIFICATION_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::ProBuilder::ActionResult* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ActionResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean ToBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_TOBOOL_OFFSET))(this);
		}

		static ::System::Boolean FromBool(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_FROMBOOL_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::ActionResult* get_Success()
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_SUCCESS_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::ActionResult* get_NoSelection()
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_NOSELECTION_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::ActionResult* get_UserCanceled()
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ACTIONRESULT_GET_USERCANCELED_OFFSET))();
		}
	};
}
