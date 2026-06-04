#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParamsArray.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMATHELPER_OFFSET UNITYSDK_OFFSET(0x186059C0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_1_OFFSET UNITYSDK_OFFSET(0x18606A60)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_2_OFFSET UNITYSDK_OFFSET(0x18606AB0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_3_OFFSET UNITYSDK_OFFSET(0x18606B00)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_4_OFFSET UNITYSDK_OFFSET(0x18606BD0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_5_OFFSET UNITYSDK_OFFSET(0x18606C10)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_6_OFFSET UNITYSDK_OFFSET(0x18606C60)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_7_OFFSET UNITYSDK_OFFSET(0x18606CA0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x18605970)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDHELPER_OFFSET UNITYSDK_OFFSET(0x186039C0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_1_OFFSET UNITYSDK_OFFSET(0x18603A50)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_OFFSET UNITYSDK_OFFSET(0x186039E0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_10_OFFSET UNITYSDK_OFFSET(0x18604820)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_11_OFFSET UNITYSDK_OFFSET(0x186048C0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_12_OFFSET UNITYSDK_OFFSET(0x18604970)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_13_OFFSET UNITYSDK_OFFSET(0x18604A20)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_14_OFFSET UNITYSDK_OFFSET(0x18604AE0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_15_OFFSET UNITYSDK_OFFSET(0x18604B90)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_16_OFFSET UNITYSDK_OFFSET(0x18604C30)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_17_OFFSET UNITYSDK_OFFSET(0x18604CD0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_18_OFFSET UNITYSDK_OFFSET(0x18604D10)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_19_OFFSET UNITYSDK_OFFSET(0x186037D0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x18603680)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x185FEDB0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_3_OFFSET UNITYSDK_OFFSET(0x18600BF0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_4_OFFSET UNITYSDK_OFFSET(0x18604550)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_5_OFFSET UNITYSDK_OFFSET(0x18604570)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_6_OFFSET UNITYSDK_OFFSET(0x18604620)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_7_OFFSET UNITYSDK_OFFSET(0x186017E0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_8_OFFSET UNITYSDK_OFFSET(0x186046D0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_9_OFFSET UNITYSDK_OFFSET(0x18604780)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x186033D0)
#define SYSTEM_TEXT_STRINGBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18603260)
#define SYSTEM_TEXT_STRINGBUILDER_COPYTO_OFFSET UNITYSDK_OFFSET(0x18603AC0)
#define SYSTEM_TEXT_STRINGBUILDER_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x18602F20)
#define SYSTEM_TEXT_STRINGBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x186070F0)
#define SYSTEM_TEXT_STRINGBUILDER_EXPANDBYABLOCK_OFFSET UNITYSDK_OFFSET(0x18603590)
#define SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORBYTE_OFFSET UNITYSDK_OFFSET(0x18607A30)
#define SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORINDEX_OFFSET UNITYSDK_OFFSET(0x18603560)
#define SYSTEM_TEXT_STRINGBUILDER_FORMATERROR_OFFSET UNITYSDK_OFFSET(0x18606D80)
#define SYSTEM_TEXT_STRINGBUILDER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x18602DB0)
#define SYSTEM_TEXT_STRINGBUILDER_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x185FF180)
#define SYSTEM_TEXT_STRINGBUILDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x185FFE60)
#define SYSTEM_TEXT_STRINGBUILDER_GET_MAXCAPACITY_OFFSET UNITYSDK_OFFSET(0x18602F10)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_10_OFFSET UNITYSDK_OFFSET(0x18605410)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_11_OFFSET UNITYSDK_OFFSET(0x186054C0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_12_OFFSET UNITYSDK_OFFSET(0x18605580)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_13_OFFSET UNITYSDK_OFFSET(0x18605640)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_14_OFFSET UNITYSDK_OFFSET(0x18605710)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_15_OFFSET UNITYSDK_OFFSET(0x186057C0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_16_OFFSET UNITYSDK_OFFSET(0x18605870)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_17_OFFSET UNITYSDK_OFFSET(0x18605920)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_18_OFFSET UNITYSDK_OFFSET(0x18604DF0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_1_OFFSET UNITYSDK_OFFSET(0x18604D50)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_2_OFFSET UNITYSDK_OFFSET(0x18604EA0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_3_OFFSET UNITYSDK_OFFSET(0x18604EC0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_4_OFFSET UNITYSDK_OFFSET(0x18604F70)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_5_OFFSET UNITYSDK_OFFSET(0x18605020)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_6_OFFSET UNITYSDK_OFFSET(0x186050D0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_7_OFFSET UNITYSDK_OFFSET(0x18605100)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_8_OFFSET UNITYSDK_OFFSET(0x186051A0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_9_OFFSET UNITYSDK_OFFSET(0x18605360)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_OFFSET UNITYSDK_OFFSET(0x18603E20)
#define SYSTEM_TEXT_STRINGBUILDER_MAKEROOM_OFFSET UNITYSDK_OFFSET(0x18603F90)
#define SYSTEM_TEXT_STRINGBUILDER_NEXT_OFFSET UNITYSDK_OFFSET(0x186079E0)
#define SYSTEM_TEXT_STRINGBUILDER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x18604480)
#define SYSTEM_TEXT_STRINGBUILDER_REMOVE_OFFSET UNITYSDK_OFFSET(0x185FFFB0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACEALLINCHUNK_OFFSET UNITYSDK_OFFSET(0x186073F0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACEINPLACEATCHUNK_OFFSET UNITYSDK_OFFSET(0x18604290)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x18606E10)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x186076C0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x186076F0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_OFFSET UNITYSDK_OFFSET(0x18606DE0)
#define SYSTEM_TEXT_STRINGBUILDER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x18602E00)
#define SYSTEM_TEXT_STRINGBUILDER_SET_CHARS_OFFSET UNITYSDK_OFFSET(0x185FFEE0)
#define SYSTEM_TEXT_STRINGBUILDER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18603280)
#define SYSTEM_TEXT_STRINGBUILDER_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x18607260)
#define SYSTEM_TEXT_STRINGBUILDER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18602BC0)
#define SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_1_OFFSET UNITYSDK_OFFSET(0x18603D30)
#define SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_OFFSET UNITYSDK_OFFSET(0x18602680)
#define SYSTEM_TEXT_STRINGBUILDER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18602FD0)
#define SYSTEM_TEXT_STRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185FE8C0)
#define SYSTEM_TEXT_STRINGBUILDER_VERIFYCLASSINVARIANT_OFFSET UNITYSDK_OFFSET(0x18602DD0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185FED50)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18602340)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x186022F0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18602400)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x18602720)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x18602880)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x18607A60)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x18607A90)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x186022A0)

namespace System::Text
{
	inline static constexpr unsigned int StringBuilder_TypeDefinitionIndex = 495;

	class StringBuilder : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultCapacity = 0x10; // 0x0
		// static const ::System::String* CapacityField; // 0x0
		// static const ::System::String* MaxCapacityField; // 0x0
		// static const ::System::String* StringValueField; // 0x0
		// static const ::System::String* ThreadIDField; // 0x0
		// static const ::System::Int32 MaxChunkSize = 0x1F40; // 0x0
		::Il2CppArray<::System::Char>* m_ChunkChars; // 0x10
		::System::Text::StringBuilder* m_ChunkPrevious; // 0x18
		::System::Int32 m_ChunkLength; // 0x20
		::System::Int32 m_ChunkOffset; // 0x24
		::System::Int32 m_MaxCapacity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_6_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_7(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_7_OFFSET))(this, a1);
		}

		::System::Void _ctor_8(::System::Int32 a1, ::System::Int32 a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyClassInvariant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_VERIFYCLASSINVARIANT_OFFSET))(this);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_CAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_MAXCAPACITY_OFFSET))(this);
		}

		::System::Int32 EnsureCapacity(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_ENSURECAPACITY_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Clear()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Char get_Chars(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_CHARS_OFFSET))(this, a1);
		}

		::System::Void set_Chars(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_CHARS_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Append(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Append_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* Append_2(::System::String* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_2_OFFSET))(this, a1);
		}

		::System::Void AppendHelper(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDHELPER_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_3(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* AppendLine()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_OFFSET))(this);
		}

		::System::Text::StringBuilder* AppendLine_1(::System::String* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_1_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Int32 a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_COPYTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Text::StringBuilder* Insert(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* Remove(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REMOVE_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Append_4(::System::Boolean a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_4_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_5(::System::SByte a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_5_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_6(::System::Byte a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_6_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_7(::System::Char a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_7_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_8(::System::Int16 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_8_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_9(::System::Int32 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_9_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_10(::System::Int64 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_10_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_11(::System::Single a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_11_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_12(::System::Double a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_12_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_13(::System::Decimal a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_13_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_14(::System::UInt16 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_14_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_15(::System::UInt32 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_15_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_16(::System::UInt64 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_16_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_17(::System::Object* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_17_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Append_18(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_18_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Insert_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_1_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_2(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_2_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_3(::System::Int32 a1, ::System::SByte a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_3_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_4(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_4_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_5(::System::Int32 a1, ::System::Int16 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_5_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_6(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_6_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_7(::System::Int32 a1, ::Il2CppArray<::System::Char>* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_7_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_8(::System::Int32 a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Text::StringBuilder* Insert_9(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_9_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_10(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_10_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_11(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_11_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_12(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_12_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_13(::System::Int32 a1, ::System::Decimal a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_13_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_14(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_14_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_15(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_15_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_16(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_16_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Insert_17(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_17_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* AppendFormat(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* AppendFormat_1(::System::String* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* AppendFormat_2(::System::String* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Text::StringBuilder* AppendFormat_3(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_3_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* AppendFormat_4(::System::IFormatProvider* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* AppendFormat_5(::System::IFormatProvider* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Text::StringBuilder* AppendFormat_6(::System::IFormatProvider* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Text::StringBuilder* AppendFormat_7(::System::IFormatProvider* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_7_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void FormatError()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_FORMATERROR_OFFSET))();
		}

		::System::Text::StringBuilder* AppendFormatHelper(::System::IFormatProvider* a1, ::System::String* a2, ::System::ParamsArray a3)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::ParamsArray))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMATHELPER_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* Replace(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_EQUALS_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Replace_1(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Text::StringBuilder* Replace_2(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_2_OFFSET))(this, a1, a2);
		}

		::System::Text::StringBuilder* Replace_3(::System::Char a1, ::System::Char a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Text::StringBuilder* Append_19(::System::Char* a1, ::System::Int32 a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_19_OFFSET))(this, a1, a2);
		}

		::System::Void Insert_18(::System::Int32 a1, ::System::Char* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_18_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReplaceAllInChunk(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Text::StringBuilder* a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACEALLINCHUNK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean StartsWith(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_STARTSWITH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReplaceInPlaceAtChunk(::System::Text::StringBuilder*& a1, ::System::Int32& a2, ::System::Char* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*&, ::System::Int32&, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACEINPLACEATCHUNK_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ThreadSafeCopy(::System::Char* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Char*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ThreadSafeCopy_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Char>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Text::StringBuilder* FindChunkForIndex(::System::Int32 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORINDEX_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* FindChunkForByte(::System::Int32 a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORBYTE_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* Next(::System::Text::StringBuilder* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_NEXT_OFFSET))(this, a1);
		}

		::System::Void ExpandByABlock(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_EXPANDBYABLOCK_OFFSET))(this, a1);
		}

		::System::Void MakeRoom(::System::Int32 a1, ::System::Int32 a2, ::System::Text::StringBuilder*& a3, ::System::Int32& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_MAKEROOM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Remove_1(::System::Int32 a1, ::System::Int32 a2, ::System::Text::StringBuilder*& a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REMOVE_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
