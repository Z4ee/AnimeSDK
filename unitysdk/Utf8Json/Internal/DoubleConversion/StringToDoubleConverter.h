#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/Iterator.h"
#include "unitysdk/Utf8Json/Internal/DoubleConversion/StringToDoubleConverter_Flags.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_ADVANCETONONSPACE_OFFSET UNITYSDK_OFFSET(0x1E315D50)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_CONSUMEFIRSTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1E315ED0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_CONSUMESUBSTRING_OFFSET UNITYSDK_OFFSET(0x1E315E00)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1E314940)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_GETFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1E314AC0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1E315BA0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_SIGNEDZERO_OFFSET UNITYSDK_OFFSET(0x1E315F30)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_STRINGTOIEEE_OFFSET UNITYSDK_OFFSET(0x1E314CC0)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1E314C40)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1E315B10)
#define UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E315F50)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int StringToDoubleConverter_TypeDefinitionIndex = 91274;

	class StringToDoubleConverter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_kWhitespaceTable7()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x4E6F0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_infinity_symbol_()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x4E6F8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_nan_symbol_()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x4E700);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_kWhitespaceTable16()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x4E708);
		}
		static ::System::Int32* StaticGet_kWhitespaceTable7Length()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x12E20);
		}
		static ::System::Int32* StaticGet_kWhitespaceTable16Length()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x12E24);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_fallbackBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_kBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(StringToDoubleConverter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::Utf8Json::Internal::DoubleConversion::StringToDoubleConverter_Flags flags_; // 0x0
		// static const ::System::Double empty_string_value_; // 0x0
		// static const ::System::Double junk_string_value_; // 0x0
		// static const ::System::Int32 kMaxSignificantDigits = 0x304; // 0x0
		// static const ::System::Int32 kBufferSize = 0x30E; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_GETBUFFER_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetFallbackBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_GETFALLBACKBUFFER_OFFSET))();
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_TODOUBLE_OFFSET))(buffer, offset, readCount);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32& readCount)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_TOSINGLE_OFFSET))(buffer, offset, readCount);
		}

		static ::System::Boolean isWhitespace(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_ISWHITESPACE_OFFSET))(x);
		}

		static ::System::Boolean AdvanceToNonspace(::Utf8Json::Internal::DoubleConversion::Iterator& current, ::Utf8Json::Internal::DoubleConversion::Iterator end)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator&, ::Utf8Json::Internal::DoubleConversion::Iterator))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_ADVANCETONONSPACE_OFFSET))(current, end);
		}

		static ::System::Boolean ConsumeSubString(::Utf8Json::Internal::DoubleConversion::Iterator& current, ::Utf8Json::Internal::DoubleConversion::Iterator end, ::Il2CppArray<::System::Byte>* substring)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator&, ::Utf8Json::Internal::DoubleConversion::Iterator, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_CONSUMESUBSTRING_OFFSET))(current, end, substring);
		}

		static ::System::Boolean ConsumeFirstCharacter(::Utf8Json::Internal::DoubleConversion::Iterator& iter, ::Il2CppArray<::System::Byte>* str, ::System::Int32 offset)
		{
			return ((::System::Boolean(*)(::Utf8Json::Internal::DoubleConversion::Iterator&, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_CONSUMEFIRSTCHARACTER_OFFSET))(iter, str, offset);
		}

		static ::System::Double SignedZero(::System::Boolean sign)
		{
			return ((::System::Double(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_SIGNEDZERO_OFFSET))(sign);
		}

		static ::System::Double StringToIeee(::Utf8Json::Internal::DoubleConversion::Iterator input, ::System::Int32 length, ::System::Boolean read_as_double, ::System::Int32& processed_characters_count)
		{
			return ((::System::Double(*)(::Utf8Json::Internal::DoubleConversion::Iterator, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_STRINGTODOUBLECONVERTER_STRINGTOIEEE_OFFSET))(input, length, read_as_double, processed_characters_count);
		}
	};
}
