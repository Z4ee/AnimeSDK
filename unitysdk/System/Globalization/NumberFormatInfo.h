#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/DigitShapes.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureData; }

#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CHECKGROUPSIZE_OFFSET UNITYSDK_OFFSET(0x195F83B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x195F80B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x195FA440)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x195F7E00)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x195F81A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F82E0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F8CD0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x195F8490)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F8FA0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F9970)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F8DE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET UNITYSDK_OFFSET(0x195F7F60)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_DIGITSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x195FA330)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_INVARIANTINFO_OFFSET UNITYSDK_OFFSET(0x195F7C20)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x195F83A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F8EC0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NATIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x195FA170)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F94A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET UNITYSDK_OFFSET(0x195F9580)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x195F9660)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F97A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F9860)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x195F8750)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F90E0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x195F9C70)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F9DB0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F9E70)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x195F8A10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F9360)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F9220)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F9F90)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERMILLESYMBOL_OFFSET UNITYSDK_OFFSET(0x195FA080)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F9AB0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET UNITYSDK_OFFSET(0x195F9B90)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x195F76A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x195F7690)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x195F7590)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x195F7CD0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x195F81B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F82F0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F8CE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x195F8590)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F8FB0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F9980)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F8DF0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_DIGITSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x195FA340)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F8ED0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NATIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x195FA280)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NEGATIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F94B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NEGATIVESIGN_OFFSET UNITYSDK_OFFSET(0x195F9590)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x195F9670)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F97B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F9870)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x195F8850)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F90F0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x195F9C80)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F9DC0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F9E80)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x195F8B10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F9370)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x195F9230)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F9FA0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERMILLESYMBOL_OFFSET UNITYSDK_OFFSET(0x195FA090)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_POSITIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x195F9AC0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_POSITIVESIGN_OFFSET UNITYSDK_OFFSET(0x195F9BA0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEFLOATINGPOINT_OFFSET UNITYSDK_OFFSET(0x195FA550)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x195FA490)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F76B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDIGITSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x195F7B40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195F7760)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYNATIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x195F77D0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x195F7BB0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195F71D0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195F71C0)

namespace System::Globalization
{
	inline static constexpr unsigned int NumberFormatInfo_TypeDefinitionIndex = 742;

	class NumberFormatInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::NumberFormatInfo** StaticGet_invariantInfo()
		{
			return (::System::Globalization::NumberFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatInfo_TypeDefinitionIndex)->GetStaticField(0xEF0);
		}
		// static const ::System::Globalization::NumberStyles InvalidNumberStyles; // 0x0
		::Il2CppArray<::System::Int32>* numberGroupSizes; // 0x10
		::Il2CppArray<::System::Int32>* currencyGroupSizes; // 0x18
		::Il2CppArray<::System::Int32>* percentGroupSizes; // 0x20
		::System::String* positiveSign; // 0x28
		::System::String* negativeSign; // 0x30
		::System::String* numberDecimalSeparator; // 0x38
		::System::String* numberGroupSeparator; // 0x40
		::System::String* currencyGroupSeparator; // 0x48
		::System::String* currencyDecimalSeparator; // 0x50
		::System::String* currencySymbol; // 0x58
		::System::String* ansiCurrencySymbol; // 0x60
		::System::String* nanSymbol; // 0x68
		::System::String* positiveInfinitySymbol; // 0x70
		::System::String* negativeInfinitySymbol; // 0x78
		::System::String* percentDecimalSeparator; // 0x80
		::System::String* percentGroupSeparator; // 0x88
		::System::String* percentSymbol; // 0x90
		::System::String* perMilleSymbol; // 0x98
		::Il2CppArray<::System::String*>* nativeDigits; // 0xA0
		::System::Int32 m_dataItem; // 0xA8
		::System::Int32 numberDecimalDigits; // 0xAC
		::System::Int32 currencyDecimalDigits; // 0xB0
		::System::Int32 currencyPositivePattern; // 0xB4
		::System::Int32 currencyNegativePattern; // 0xB8
		::System::Int32 numberNegativePattern; // 0xBC
		::System::Int32 percentPositivePattern; // 0xC0
		::System::Int32 percentNegativePattern; // 0xC4
		::System::Int32 percentDecimalDigits; // 0xC8
		::System::Int32 digitSubstitution; // 0xCC
		::System::Boolean isReadOnly; // 0xD0
		::System::Boolean m_useUserOverride; // 0xD1
		::System::Boolean m_isInvariant; // 0xD2
		::System::Boolean validForParseAsNumber; // 0xD3
		::System::Boolean validForParseAsCurrency; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::CultureData* cultureData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_1_OFFSET))(this, cultureData);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONSERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		static ::System::Void VerifyDecimalSeparator(::System::String* decSep, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDECIMALSEPARATOR_OFFSET))(decSep, propertyName);
		}

		static ::System::Void VerifyGroupSeparator(::System::String* groupSep, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYGROUPSEPARATOR_OFFSET))(groupSep, propertyName);
		}

		static ::System::Void VerifyNativeDigits(::Il2CppArray<::System::String*>* nativeDig, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYNATIVEDIGITS_OFFSET))(nativeDig, propertyName);
		}

		static ::System::Void VerifyDigitSubstitution(::System::Globalization::DigitShapes digitSub, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::System::Globalization::DigitShapes, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDIGITSUBSTITUTION_OFFSET))(digitSub, propertyName);
		}

		::System::Void VerifyWritable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYWRITABLE_OFFSET))(this);
		}

		static ::System::Globalization::NumberFormatInfo* get_InvariantInfo()
		{
			return ((::System::Globalization::NumberFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_INVARIANTINFO_OFFSET))();
		}

		static ::System::Globalization::NumberFormatInfo* GetInstance(::System::IFormatProvider* formatProvider)
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETINSTANCE_OFFSET))(formatProvider);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CLONE_OFFSET))(this);
		}

		::System::Int32 get_CurrencyDecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALDIGITS_OFFSET))(this);
		}

		::System::Void set_CurrencyDecimalDigits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYDECIMALDIGITS_OFFSET))(this, value);
		}

		::System::String* get_CurrencyDecimalSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET))(this);
		}

		::System::Void set_CurrencyDecimalSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYDECIMALSEPARATOR_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Void CheckGroupSize(::System::String* propName, ::Il2CppArray<::System::Int32>* groupSize)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CHECKGROUPSIZE_OFFSET))(propName, groupSize);
		}

		::Il2CppArray<::System::Int32>* get_CurrencyGroupSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET))(this);
		}

		::System::Void set_CurrencyGroupSizes(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYGROUPSIZES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_NumberGroupSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET))(this);
		}

		::System::Void set_NumberGroupSizes(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSIZES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_PercentGroupSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET))(this);
		}

		::System::Void set_PercentGroupSizes(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTGROUPSIZES_OFFSET))(this, value);
		}

		::System::String* get_CurrencyGroupSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET))(this);
		}

		::System::Void set_CurrencyGroupSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYGROUPSEPARATOR_OFFSET))(this, value);
		}

		::System::String* get_CurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET))(this);
		}

		::System::Void set_CurrencySymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYSYMBOL_OFFSET))(this, value);
		}

		static ::System::Globalization::NumberFormatInfo* get_CurrentInfo()
		{
			return ((::System::Globalization::NumberFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET))();
		}

		::System::String* get_NaNSymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET))(this);
		}

		::System::Void set_NaNSymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NANSYMBOL_OFFSET))(this, value);
		}

		::System::Int32 get_CurrencyNegativePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET))(this);
		}

		::System::Void set_CurrencyNegativePattern(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYNEGATIVEPATTERN_OFFSET))(this, value);
		}

		::System::Int32 get_NumberNegativePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET))(this);
		}

		::System::Void set_NumberNegativePattern(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERNEGATIVEPATTERN_OFFSET))(this, value);
		}

		::System::Int32 get_PercentPositivePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTPOSITIVEPATTERN_OFFSET))(this);
		}

		::System::Void set_PercentPositivePattern(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTPOSITIVEPATTERN_OFFSET))(this, value);
		}

		::System::Int32 get_PercentNegativePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTNEGATIVEPATTERN_OFFSET))(this);
		}

		::System::Void set_PercentNegativePattern(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTNEGATIVEPATTERN_OFFSET))(this, value);
		}

		::System::String* get_NegativeInfinitySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVEINFINITYSYMBOL_OFFSET))(this);
		}

		::System::Void set_NegativeInfinitySymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NEGATIVEINFINITYSYMBOL_OFFSET))(this, value);
		}

		::System::String* get_NegativeSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET))(this);
		}

		::System::Void set_NegativeSign(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NEGATIVESIGN_OFFSET))(this, value);
		}

		::System::Int32 get_NumberDecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET))(this);
		}

		::System::Void set_NumberDecimalDigits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALDIGITS_OFFSET))(this, value);
		}

		::System::String* get_NumberDecimalSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALSEPARATOR_OFFSET))(this);
		}

		::System::Void set_NumberDecimalSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALSEPARATOR_OFFSET))(this, value);
		}

		::System::String* get_NumberGroupSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSEPARATOR_OFFSET))(this);
		}

		::System::Void set_NumberGroupSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSEPARATOR_OFFSET))(this, value);
		}

		::System::Int32 get_CurrencyPositivePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYPOSITIVEPATTERN_OFFSET))(this);
		}

		::System::Void set_CurrencyPositivePattern(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYPOSITIVEPATTERN_OFFSET))(this, value);
		}

		::System::String* get_PositiveInfinitySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET))(this);
		}

		::System::Void set_PositiveInfinitySymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_POSITIVEINFINITYSYMBOL_OFFSET))(this, value);
		}

		::System::String* get_PositiveSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET))(this);
		}

		::System::Void set_PositiveSign(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_POSITIVESIGN_OFFSET))(this, value);
		}

		::System::Int32 get_PercentDecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET))(this);
		}

		::System::Void set_PercentDecimalDigits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALDIGITS_OFFSET))(this, value);
		}

		::System::String* get_PercentDecimalSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALSEPARATOR_OFFSET))(this);
		}

		::System::Void set_PercentDecimalSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALSEPARATOR_OFFSET))(this, value);
		}

		::System::String* get_PercentGroupSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSEPARATOR_OFFSET))(this);
		}

		::System::Void set_PercentGroupSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTGROUPSEPARATOR_OFFSET))(this, value);
		}

		::System::String* get_PercentSymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTSYMBOL_OFFSET))(this);
		}

		::System::Void set_PercentSymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTSYMBOL_OFFSET))(this, value);
		}

		::System::String* get_PerMilleSymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERMILLESYMBOL_OFFSET))(this);
		}

		::System::Void set_PerMilleSymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERMILLESYMBOL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_NativeDigits()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NATIVEDIGITS_OFFSET))(this);
		}

		::System::Void set_NativeDigits(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NATIVEDIGITS_OFFSET))(this, value);
		}

		::System::Globalization::DigitShapes get_DigitSubstitution()
		{
			return ((::System::Globalization::DigitShapes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_DIGITSUBSTITUTION_OFFSET))(this);
		}

		::System::Void set_DigitSubstitution(::System::Globalization::DigitShapes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DigitShapes))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_DIGITSUBSTITUTION_OFFSET))(this, value);
		}

		::System::Object* GetFormat(::System::Type* formatType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETFORMAT_OFFSET))(this, formatType);
		}

		static ::System::Globalization::NumberFormatInfo* ReadOnly(::System::Globalization::NumberFormatInfo* nfi)
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_READONLY_OFFSET))(nfi);
		}

		static ::System::Void ValidateParseStyleInteger(::System::Globalization::NumberStyles style)
		{
			return ((::System::Void(*)(::System::Globalization::NumberStyles))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEINTEGER_OFFSET))(style);
		}

		static ::System::Void ValidateParseStyleFloatingPoint(::System::Globalization::NumberStyles style)
		{
			return ((::System::Void(*)(::System::Globalization::NumberStyles))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEFLOATINGPOINT_OFFSET))(style);
		}
	};
}
