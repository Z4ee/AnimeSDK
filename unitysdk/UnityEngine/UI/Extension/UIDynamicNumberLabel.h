#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_ADD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1F1D9480)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F1D7670)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_COMPLETEUPDATENUMBERIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1F1D7E80)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x1F1D8A90)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATINTNUMBER_OFFSET UNITYSDK_OFFSET(0x1F1D9220)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATNUMBER2INT_OFFSET UNITYSDK_OFFSET(0x1F1D8300)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GETFORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x1F1D7C10)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GET_SPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x1F1D79E0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_NORMALIZEDTIMETOREALTIME_OFFSET UNITYSDK_OFFSET(0x1F1D7A90)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_ONUPDATENUMBERCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F1D7D70)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REALTIMETONORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1F1D9310)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REMOVE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1F1D9500)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_RESET_OFFSET UNITYSDK_OFFSET(0x1F1D76E0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x1F1D8740)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERINST_OFFSET UNITYSDK_OFFSET(0x1F1D86A0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x1F1D8B60)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERTHOUSANDTYPE_OFFSET UNITYSDK_OFFSET(0x1F1D7F50)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_1_OFFSET UNITYSDK_OFFSET(0x1F1D8460)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_2_OFFSET UNITYSDK_OFFSET(0x1F1D7FB0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x1F1D81F0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F1D7730)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D95E0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D9580)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__GETFORMATANDNUMBER_16_2_OFFSET UNITYSDK_OFFSET(0x1F1D8CB0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISDECIMALSEPARATOR_16_1_OFFSET UNITYSDK_OFFSET(0x1F1D9690)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISNUMBER_16_0_OFFSET UNITYSDK_OFFSET(0x1F1D9680)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F1D9660)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__14_0_OFFSET UNITYSDK_OFFSET(0x1F1D9670)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIDynamicNumberLabel_TypeDefinitionIndex = 55428;

	class UIDynamicNumberLabel : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_sb()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UIDynamicNumberLabel_TypeDefinitionIndex)->GetStaticField(0x3DD90);
		}
		::UnityEngine::UI::Text* numberText; // 0x18
		::System::Single duration; // 0x20
		::System::Single delay; // 0x24
		::UnityEngine::AnimationCurve* speedCurve; // 0x28
		::System::String* format; // 0x30
		::System::Boolean DontUseLanguageFormat; // 0x38
		::Foundation::Coroutine::CoroutineHandle delayHandle; // 0x3C
		::System::Double _originNumber; // 0x40
		::System::Double _curNumber; // 0x48
		::System::Double _targetNumber; // 0x50
		::System::Double _lastNumber; // 0x58
		::System::Double enlarge; // 0x60
		::System::Action* onFinish; // 0x68
		::System::Boolean _isNumberInited; // 0x70
		::System::Boolean _formatFloat; // 0x71
		::System::Boolean _isUpdateNumber; // 0x72
		::System::Boolean _formatInt; // 0x73
		::System::Boolean _formatThousand; // 0x74
		::System::Single _lastTime; // 0x78
		::System::Boolean _curveChecked; // 0x7C
		::Il2CppArray<::UnityEngine::Keyframe>* _cacheNormalizedTimeKeyframesForCurve; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* _cacheNormalizedTimeKeyframesForDynamic; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_UPDATE_OFFSET))(this);
		}

		::System::Void CompleteUpdateNumberImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_COMPLETEUPDATENUMBERIMMEDIATELY_OFFSET))(this);
		}

		::System::Void SetNumberThousandType(::System::UInt32 originNumber, ::System::UInt32 targetNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERTHOUSANDTYPE_OFFSET))(this, originNumber, targetNumber);
		}

		::System::Void SetNumber(::System::Int32 targetNumber, ::System::Boolean format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_OFFSET))(this, targetNumber, format);
		}

		::System::Void SetNumber_1(::System::Int32 originNumber, ::System::Int32 targetNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_1_OFFSET))(this, originNumber, targetNumber);
		}

		::System::Void SetNumberInst(::System::Int32 targetNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERINST_OFFSET))(this, targetNumber);
		}

		::System::Void SetNumber_2(::System::UInt32 originNumber, ::System::UInt32 targetNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_2_OFFSET))(this, originNumber, targetNumber);
		}

		::System::Void SetFloatNumber(::System::Single targetNumber, ::System::Boolean forceShowDirect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETFLOATNUMBER_OFFSET))(this, targetNumber, forceShowDirect);
		}

		::System::Boolean SetNumberString(::System::String* target, ::System::Int32 decimalNum, ::System::Boolean isDirect)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERSTRING_OFFSET))(this, target, decimalNum, isDirect);
		}

		::System::String* GetFormatNumber(::System::Double number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GETFORMATNUMBER_OFFSET))(this, number);
		}

		::System::Single RealTimeToNormalizedTime(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REALTIMETONORMALIZEDTIME_OFFSET))(this, curve, time);
		}

		::System::Single NormalizedTimeToRealTime(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_NORMALIZEDTIMETOREALTIME_OFFSET))(this, curve, time);
		}

		::System::String* FormatFloatNumber(::System::Double number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATFLOATNUMBER_OFFSET))(this, number);
		}

		::System::String* FormatIntNumber(::System::Double number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATINTNUMBER_OFFSET))(this, number);
		}

		::System::Int32 FormatNumber2Int(::System::String* formatStr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATNUMBER2INT_OFFSET))(this, formatStr);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_RESET_OFFSET))(this);
		}

		::System::Void OnUpdateNumberComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_ONUPDATENUMBERCOMPLETE_OFFSET))(this);
		}

		::System::Void add_onFinish(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_ADD_ONFINISH_OFFSET))(this, value);
		}

		::System::Void remove_onFinish(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REMOVE_ONFINISH_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_SpeedCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GET_SPEEDCURVE_OFFSET))(this);
		}

		::System::Void _SetNumber_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__12_0_OFFSET))(this);
		}

		::System::Void _SetNumber_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__14_0_OFFSET))(this);
		}

		static ::System::Boolean _SetNumberString_g__IsNumber_16_0(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISNUMBER_16_0_OFFSET))(c);
		}

		static ::System::Boolean _SetNumberString_g__IsDecimalSeparator_16_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISDECIMALSEPARATOR_16_1_OFFSET))(c);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> _SetNumberString_g__GetFormatAndNumber_16_2(::System::String* str, ::System::Int32 decimalCount)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__GETFORMATANDNUMBER_16_2_OFFSET))(str, decimalCount);
		}
	};
}
