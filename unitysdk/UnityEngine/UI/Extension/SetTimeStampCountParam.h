#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_GET_ENDCALL_OFFSET UNITYSDK_OFFSET(0x381840)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x2E7930)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AE4BA90)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AE4BA00)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_SET_ENDCALL_OFFSET UNITYSDK_OFFSET(0x381850)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x381830)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int SetTimeStampCountParam_TypeDefinitionIndex = 41070;

	struct alignas(8) SetTimeStampCountParam
	{
		::System::Boolean _IsEnable_k__BackingField; // 0x10
		::System::Int64 _TimeStamp_k__BackingField; // 0x18
		::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* _EndCall_k__BackingField; // 0x20

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_SET_ISENABLE_OFFSET))(this, value);
		}

		::System::Int64 get_TimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* get_EndCall()
		{
			return ((::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_GET_ENDCALL_OFFSET))(this);
		}

		::System::Void set_EndCall(::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_SET_ENDCALL_OFFSET))(this, value);
		}

		/*
		static ::UnityEngine::UI::Extension::SetTimeStampCountParam op_Implicit(::System::ValueTuple_2<::System::Boolean, ::System::Int64> s)
		{
			return ((::UnityEngine::UI::Extension::SetTimeStampCountParam(*)(::System::ValueTuple_2<::System::Boolean, ::System::Int64>))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_OP_IMPLICIT_OFFSET))(s);
		}
		*/

		/*
		static ::UnityEngine::UI::Extension::SetTimeStampCountParam op_Implicit_1(::System::ValueTuple_3<::System::Boolean, ::System::Int64, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*> s)
		{
			return ((::UnityEngine::UI::Extension::SetTimeStampCountParam(*)(::System::ValueTuple_3<::System::Boolean, ::System::Int64, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_SETTIMESTAMPCOUNTPARAM_OP_IMPLICIT_1_OFFSET))(s);
		}
		*/
	};
}
