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

#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_ADD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x17891BE0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1788FDF0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_COMPLETEUPDATENUMBERIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x17890670)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x178911C0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATINTNUMBER_OFFSET UNITYSDK_OFFSET(0x17891980)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATNUMBER2INT_OFFSET UNITYSDK_OFFSET(0x17890AF0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GETFORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x17890410)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GET_SPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x178901E0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_NORMALIZEDTIMETOREALTIME_OFFSET UNITYSDK_OFFSET(0x17890290)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_ONUPDATENUMBERCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17890560)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REALTIMETONORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x17891A70)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REMOVE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x17891C60)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_RESET_OFFSET UNITYSDK_OFFSET(0x1788FE60)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x17890E90)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x17891290)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBERTHOUSANDTYPE_OFFSET UNITYSDK_OFFSET(0x17890740)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_1_OFFSET UNITYSDK_OFFSET(0x17890C50)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_2_OFFSET UNITYSDK_OFFSET(0x178907A0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x178909E0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1788FEB0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17891D40)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17891CE0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__GETFORMATANDNUMBER_15_2_OFFSET UNITYSDK_OFFSET(0x178913E0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISDECIMALSEPARATOR_15_1_OFFSET UNITYSDK_OFFSET(0x17891DF0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISNUMBER_15_0_OFFSET UNITYSDK_OFFSET(0x17891DE0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__12_0_OFFSET UNITYSDK_OFFSET(0x17891DC0)
#define UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__13_0_OFFSET UNITYSDK_OFFSET(0x17891DD0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIDynamicNumberLabel_TypeDefinitionIndex = 45746;

	class UIDynamicNumberLabel : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_sb()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UIDynamicNumberLabel_TypeDefinitionIndex)->GetStaticField(0x39180);
		}
		::UnityEngine::UI::Text* numberText; // 0x18
		::System::Single duration; // 0x20
		::System::Single delay; // 0x24
		::UnityEngine::AnimationCurve* speedCurve; // 0x28
		::System::String* format; // 0x30
		::System::Boolean DontUseLanguageFormat; // 0x38
		::Foundation::Coroutine::CoroutineHandle delayHandle; // 0x3C
		::System::Single _originNumber; // 0x40
		::System::Single _curNumber; // 0x44
		::System::Single _targetNumber; // 0x48
		::System::Single _lastNumber; // 0x4C
		::System::Single enlarge; // 0x50
		::System::Action* onFinish; // 0x58
		::System::Boolean _isNumberInited; // 0x60
		::System::Boolean _formatFloat; // 0x61
		::System::Boolean _isUpdateNumber; // 0x62
		::System::Boolean _formatInt; // 0x63
		::System::Boolean _formatThousand; // 0x64
		::System::Single _lastTime; // 0x68
		::System::Boolean _curveChecked; // 0x6C
		::Il2CppArray<::UnityEngine::Keyframe>* _cacheNormalizedTimeKeyframesForCurve; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* _cacheNormalizedTimeKeyframesForDynamic; // 0x78

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

		::System::String* GetFormatNumber(::System::Single number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_GETFORMATNUMBER_OFFSET))(this, number);
		}

		::System::Single RealTimeToNormalizedTime(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_REALTIMETONORMALIZEDTIME_OFFSET))(this, curve, time);
		}

		::System::Single NormalizedTimeToRealTime(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_NORMALIZEDTIMETOREALTIME_OFFSET))(this, curve, time);
		}

		::System::String* FormatFloatNumber(::System::Single number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATFLOATNUMBER_OFFSET))(this, number);
		}

		::System::String* FormatIntNumber(::System::Single number)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL_FORMATINTNUMBER_OFFSET))(this, number);
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

		::System::Void _SetNumber_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBER_B__13_0_OFFSET))(this);
		}

		static ::System::Boolean _SetNumberString_g__IsNumber_15_0(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISNUMBER_15_0_OFFSET))(c);
		}

		static ::System::Boolean _SetNumberString_g__IsDecimalSeparator_15_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__ISDECIMALSEPARATOR_15_1_OFFSET))(c);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> _SetNumberString_g__GetFormatAndNumber_15_2(::System::String* str, ::System::Int32 decimalCount)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIDYNAMICNUMBERLABEL__SETNUMBERSTRING_G__GETFORMATANDNUMBER_15_2_OFFSET))(str, decimalCount);
		}
	};
}
