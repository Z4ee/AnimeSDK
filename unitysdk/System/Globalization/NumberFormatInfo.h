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

#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CHECKGROUPSIZE_OFFSET UNITYSDK_OFFSET(0x1BA1BB50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA1B850)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x1BA1DBE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA1B5A0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1B940)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1BA80)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1C470)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1BA1BC30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1C740)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1D110)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1C580)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_CURRENTINFO_OFFSET UNITYSDK_OFFSET(0x1BA1B700)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_DIGITSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x1BA1DAD0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_INVARIANTINFO_OFFSET UNITYSDK_OFFSET(0x1BA1B3C0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BA1BB40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1C660)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NATIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1D910)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1CC40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NEGATIVESIGN_OFFSET UNITYSDK_OFFSET(0x1BA1CD20)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1CE00)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1CF40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1D000)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1BA1BEF0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_NUMBERNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1C880)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1D410)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1D550)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1D610)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1BA1C1B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1CB00)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1C9C0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1D730)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_PERMILLESYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1D820)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1D250)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_GET_POSITIVESIGN_OFFSET UNITYSDK_OFFSET(0x1BA1D330)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BA1AE40)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BA1AE30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BA1AD30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x1BA1B470)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1B950)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1BA90)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1C480)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1BA1BD30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1C750)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1D120)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1C590)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_DIGITSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x1BA1DAE0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NANSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1C670)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NATIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1DA20)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NEGATIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1CC50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NEGATIVESIGN_OFFSET UNITYSDK_OFFSET(0x1BA1CD30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1CE10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1CF50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1D010)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1BA1BFF0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_NUMBERNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1C890)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1D420)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1D560)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1D620)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x1BA1C2B0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTNEGATIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1CB10)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTPOSITIVEPATTERN_OFFSET UNITYSDK_OFFSET(0x1BA1C9D0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERCENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1D740)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_PERMILLESYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1D830)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_POSITIVEINFINITYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BA1D260)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_SET_POSITIVESIGN_OFFSET UNITYSDK_OFFSET(0x1BA1D340)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEFLOATINGPOINT_OFFSET UNITYSDK_OFFSET(0x1BA1DCF0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x1BA1DC30)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1AE50)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYDIGITSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x1BA1B2E0)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1AF00)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYNATIVEDIGITS_OFFSET UNITYSDK_OFFSET(0x1BA1AF70)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x1BA1B350)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BA1A970)
#define SYSTEM_GLOBALIZATION_NUMBERFORMATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1A960)

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
