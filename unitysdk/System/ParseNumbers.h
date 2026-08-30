#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_PARSENUMBERS_CONVERTTOBASE16_OFFSET UNITYSDK_OFFSET(0x1CC10900)
#define SYSTEM_PARSENUMBERS_CONVERTTOBASE2_OFFSET UNITYSDK_OFFSET(0x1CC0EE30)
#define SYSTEM_PARSENUMBERS_CONVERTTOBASE8_OFFSET UNITYSDK_OFFSET(0x1CC10600)
#define SYSTEM_PARSENUMBERS_ENDIANSWAP_OFFSET UNITYSDK_OFFSET(0x1CC11400)
#define SYSTEM_PARSENUMBERS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC11220)
#define SYSTEM_PARSENUMBERS_LONGTOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC0ED30)
#define SYSTEM_PARSENUMBERS_STRINGTOINT_1_OFFSET UNITYSDK_OFFSET(0x1CC0E8F0)
#define SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x1CC0E8E0)
#define SYSTEM_PARSENUMBERS_STRINGTOLONG_1_OFFSET UNITYSDK_OFFSET(0x1CC10D40)
#define SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x1CC10D30)

namespace System
{
	inline static constexpr unsigned int ParseNumbers_TypeDefinitionIndex = 374;

	class ParseNumbers : public ::System::Object
	{
	public:
		static ::System::Int32 StringToInt(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 StringToInt_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32* a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOINT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* LongToString(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Char a4, ::System::Int32 a5)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_LONGTOSTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int64 StringToLong(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 StringToLong_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32* a4)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOLONG_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* IntToString(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Char a4, ::System::Int32 a5)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_INTTOSTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void EndianSwap(::Il2CppArray<::System::Byte>*& a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_ENDIANSWAP_OFFSET))(a1);
		}

		static ::System::Text::StringBuilder* ConvertToBase2(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_CONVERTTOBASE2_OFFSET))(a1);
		}

		static ::System::Text::StringBuilder* ConvertToBase8(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_CONVERTTOBASE8_OFFSET))(a1);
		}

		static ::System::Text::StringBuilder* ConvertToBase16(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_CONVERTTOBASE16_OFFSET))(a1);
		}
	};
}
