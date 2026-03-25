#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureData; }

#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x162F3D90)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x16312060)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x16311500)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x16311860)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311870)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311B00)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x16311890)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311B30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311EC0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x16311B10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET UNITYSDK_OFFSET(0x16311650)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_INVARIANTINFO_OFFSET UNITYSDK_OFFSET(0x162F5110)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x16311880)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x16311B20)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x16311D30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET UNITYSDK_OFFSET(0x16311D40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x16311D50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311D60)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311DD0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x16311960)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311B40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x16311EF0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311F00)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311F80)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x16311A30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311C40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311B50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x16311F90)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERMILLESYMBOL_OFFSET UNITYSDK_OFFSET(0x16312050)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x16311ED0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET UNITYSDK_OFFSET(0x16311EE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x16311290)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x16311280)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x16311180)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x163113F0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311D70)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311DE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311F10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311C50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x16311B60)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x16311FA0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEFLOATINGPOINT_OFFSET UNITYSDK_OFFSET(0x16312140)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x163120B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x163112A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x16311330)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x163113A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162F46F0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16311170)

namespace System::Globalization
{
	inline static constexpr unsigned int NumberFormatInfo_TypeDefinitionIndex = 758;

	class NumberFormatInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::NumberFormatInfo** StaticGet_invariantInfo()
		{
			return (::System::Globalization::NumberFormatInfo**)Il2CppClass::FromTypeDefinitionIndex(NumberFormatInfo_TypeDefinitionIndex)->GetStaticField(0x4B70);
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

		::System::String* get_CurrencyDecimalSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_CurrencyGroupSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_NumberGroupSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_PercentGroupSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET))(this);
		}

		::System::String* get_CurrencyGroupSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET))(this);
		}

		::System::String* get_CurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET))(this);
		}

		static ::System::Globalization::NumberFormatInfo* get_CurrentInfo()
		{
			return ((::System::Globalization::NumberFormatInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET))();
		}

		::System::String* get_NaNSymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET))(this);
		}

		::System::Int32 get_CurrencyNegativePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET))(this);
		}

		::System::Int32 get_NumberNegativePattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET))(this);
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

		::System::String* get_NegativeSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET))(this);
		}

		::System::Int32 get_NumberDecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET))(this);
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

		::System::String* get_PositiveInfinitySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET))(this);
		}

		::System::String* get_PositiveSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET))(this);
		}

		::System::Int32 get_PercentDecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET))(this);
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
