#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_PARSENUMBERS_CONVERTTOBASE16_OFFSET UNITYSDK_OFFSET(0x179927E0)
#define SYSTEM_PARSENUMBERS_CONVERTTOBASE2_OFFSET UNITYSDK_OFFSET(0x17992440)
#define SYSTEM_PARSENUMBERS_CONVERTTOBASE8_OFFSET UNITYSDK_OFFSET(0x17992650)
#define SYSTEM_PARSENUMBERS_ENDIANSWAP_OFFSET UNITYSDK_OFFSET(0x179930C0)
#define SYSTEM_PARSENUMBERS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x17992EE0)
#define SYSTEM_PARSENUMBERS_LONGTOSTRING_OFFSET UNITYSDK_OFFSET(0x17992340)
#define SYSTEM_PARSENUMBERS_STRINGTOINT_1_OFFSET UNITYSDK_OFFSET(0x17991E40)
#define SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x17991E30)
#define SYSTEM_PARSENUMBERS_STRINGTOLONG_1_OFFSET UNITYSDK_OFFSET(0x17992970)
#define SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x17992960)

namespace System
{
	inline static constexpr unsigned int ParseNumbers_TypeDefinitionIndex = 372;

	class ParseNumbers : public ::System::Object
	{
	public:
		static ::System::Int32 StringToInt(::System::String* value, ::System::Int32 fromBase, ::System::Int32 flags)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET))(value, fromBase, flags);
		}

		static ::System::Int32 StringToInt_1(::System::String* value, ::System::Int32 fromBase, ::System::Int32 flags, ::System::Int32* parsePos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOINT_1_OFFSET))(value, fromBase, flags, parsePos);
		}

		static ::System::String* LongToString(::System::Int64 value, ::System::Int32 toBase, ::System::Int32 width, ::System::Char paddingChar, ::System::Int32 flags)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_LONGTOSTRING_OFFSET))(value, toBase, width, paddingChar, flags);
		}

		static ::System::Int64 StringToLong(::System::String* value, ::System::Int32 fromBase, ::System::Int32 flags)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET))(value, fromBase, flags);
		}

		static ::System::Int64 StringToLong_1(::System::String* value, ::System::Int32 fromBase, ::System::Int32 flags, ::System::Int32* parsePos)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOLONG_1_OFFSET))(value, fromBase, flags, parsePos);
		}

		static ::System::String* IntToString(::System::Int32 value, ::System::Int32 toBase, ::System::Int32 width, ::System::Char paddingChar, ::System::Int32 flags)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_INTTOSTRING_OFFSET))(value, toBase, width, paddingChar, flags);
		}

		static ::System::Void EndianSwap(::Il2CppArray<::System::Byte>*& value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_ENDIANSWAP_OFFSET))(value);
		}

		static ::System::Text::StringBuilder* ConvertToBase2(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_CONVERTTOBASE2_OFFSET))(value);
		}

		static ::System::Text::StringBuilder* ConvertToBase8(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_CONVERTTOBASE8_OFFSET))(value);
		}

		static ::System::Text::StringBuilder* ConvertToBase16(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_CONVERTTOBASE16_OFFSET))(value);
		}
	};
}
