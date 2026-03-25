#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParamsArray.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMATHELPER_OFFSET UNITYSDK_OFFSET(0x1621EE30)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1621FDB0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1621FE00)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_3_OFFSET UNITYSDK_OFFSET(0x1621FE50)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_4_OFFSET UNITYSDK_OFFSET(0x1621FF00)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_5_OFFSET UNITYSDK_OFFSET(0x1621FF40)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_6_OFFSET UNITYSDK_OFFSET(0x1621FF90)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_7_OFFSET UNITYSDK_OFFSET(0x1621FFD0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x1621EDE0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDHELPER_OFFSET UNITYSDK_OFFSET(0x1621CF00)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_1_OFFSET UNITYSDK_OFFSET(0x1621CF90)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_OFFSET UNITYSDK_OFFSET(0x1621CF20)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_10_OFFSET UNITYSDK_OFFSET(0x1621DBD0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_11_OFFSET UNITYSDK_OFFSET(0x1621DC80)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_12_OFFSET UNITYSDK_OFFSET(0x1621DD30)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_13_OFFSET UNITYSDK_OFFSET(0x1621DDE0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_14_OFFSET UNITYSDK_OFFSET(0x1621DEA0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_15_OFFSET UNITYSDK_OFFSET(0x1621DF50)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_16_OFFSET UNITYSDK_OFFSET(0x1621DFF0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_17_OFFSET UNITYSDK_OFFSET(0x1621E0A0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_18_OFFSET UNITYSDK_OFFSET(0x1621E0E0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_19_OFFSET UNITYSDK_OFFSET(0x1621CD60)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1621CC10)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x162187B0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_3_OFFSET UNITYSDK_OFFSET(0x1621A180)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_4_OFFSET UNITYSDK_OFFSET(0x1621D900)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_5_OFFSET UNITYSDK_OFFSET(0x1621D920)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_6_OFFSET UNITYSDK_OFFSET(0x1621D9D0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_7_OFFSET UNITYSDK_OFFSET(0x1621AD80)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_8_OFFSET UNITYSDK_OFFSET(0x1621DA80)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_9_OFFSET UNITYSDK_OFFSET(0x1621DB30)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x1621C950)
#define SYSTEM_TEXT_STRINGBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1621C7E0)
#define SYSTEM_TEXT_STRINGBUILDER_COPYTO_OFFSET UNITYSDK_OFFSET(0x1621D000)
#define SYSTEM_TEXT_STRINGBUILDER_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1621C490)
#define SYSTEM_TEXT_STRINGBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x16220430)
#define SYSTEM_TEXT_STRINGBUILDER_EXPANDBYABLOCK_OFFSET UNITYSDK_OFFSET(0x1621CB20)
#define SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORBYTE_OFFSET UNITYSDK_OFFSET(0x16220DE0)
#define SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORINDEX_OFFSET UNITYSDK_OFFSET(0x1621CAF0)
#define SYSTEM_TEXT_STRINGBUILDER_FORMATERROR_OFFSET UNITYSDK_OFFSET(0x162200B0)
#define SYSTEM_TEXT_STRINGBUILDER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1621C320)
#define SYSTEM_TEXT_STRINGBUILDER_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x16218BB0)
#define SYSTEM_TEXT_STRINGBUILDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x16219890)
#define SYSTEM_TEXT_STRINGBUILDER_GET_MAXCAPACITY_OFFSET UNITYSDK_OFFSET(0x1621C480)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_10_OFFSET UNITYSDK_OFFSET(0x1621E870)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_11_OFFSET UNITYSDK_OFFSET(0x1621E920)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_12_OFFSET UNITYSDK_OFFSET(0x1621E9E0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_13_OFFSET UNITYSDK_OFFSET(0x1621EAA0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_14_OFFSET UNITYSDK_OFFSET(0x1621EB70)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_15_OFFSET UNITYSDK_OFFSET(0x1621EC30)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_16_OFFSET UNITYSDK_OFFSET(0x1621ECE0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_17_OFFSET UNITYSDK_OFFSET(0x1621ED90)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_18_OFFSET UNITYSDK_OFFSET(0x1621E190)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_1_OFFSET UNITYSDK_OFFSET(0x1621E120)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_2_OFFSET UNITYSDK_OFFSET(0x1621E2D0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_3_OFFSET UNITYSDK_OFFSET(0x1621E2F0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_4_OFFSET UNITYSDK_OFFSET(0x1621E3B0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_5_OFFSET UNITYSDK_OFFSET(0x1621E470)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_6_OFFSET UNITYSDK_OFFSET(0x1621E530)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_7_OFFSET UNITYSDK_OFFSET(0x1621E560)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_8_OFFSET UNITYSDK_OFFSET(0x1621E600)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_9_OFFSET UNITYSDK_OFFSET(0x1621E7C0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_OFFSET UNITYSDK_OFFSET(0x1621D310)
#define SYSTEM_TEXT_STRINGBUILDER_MAKEROOM_OFFSET UNITYSDK_OFFSET(0x1621D480)
#define SYSTEM_TEXT_STRINGBUILDER_NEXT_OFFSET UNITYSDK_OFFSET(0x16220D90)
#define SYSTEM_TEXT_STRINGBUILDER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1621D830)
#define SYSTEM_TEXT_STRINGBUILDER_REMOVE_OFFSET UNITYSDK_OFFSET(0x162199E0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACEALLINCHUNK_OFFSET UNITYSDK_OFFSET(0x16220750)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACEINPLACEATCHUNK_OFFSET UNITYSDK_OFFSET(0x1621D6D0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x16220140)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x16220A60)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x16220A90)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_OFFSET UNITYSDK_OFFSET(0x16220110)
#define SYSTEM_TEXT_STRINGBUILDER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1621C370)
#define SYSTEM_TEXT_STRINGBUILDER_SET_CHARS_OFFSET UNITYSDK_OFFSET(0x16219910)
#define SYSTEM_TEXT_STRINGBUILDER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1621C800)
#define SYSTEM_TEXT_STRINGBUILDER_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x162205B0)
#define SYSTEM_TEXT_STRINGBUILDER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1621C110)
#define SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_1_OFFSET UNITYSDK_OFFSET(0x1621D270)
#define SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_OFFSET UNITYSDK_OFFSET(0x1621BBE0)
#define SYSTEM_TEXT_STRINGBUILDER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1621C540)
#define SYSTEM_TEXT_STRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162182C0)
#define SYSTEM_TEXT_STRINGBUILDER_VERIFYCLASSINVARIANT_OFFSET UNITYSDK_OFFSET(0x1621C340)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16218750)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1621B970)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1621B920)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1621B9D0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1621BC80)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1621BDE0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x16220E10)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x16220E40)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1621B8C0)

namespace System::Text
{
	inline static constexpr unsigned int StringBuilder_TypeDefinitionIndex = 496;

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

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::String* value, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_3_OFFSET))(this, value, capacity);
		}

		::System::Void _ctor_4(::System::String* value, ::System::Int32 startIndex, ::System::Int32 length, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_4_OFFSET))(this, value, startIndex, length, capacity);
		}

		::System::Void _ctor_5(::System::Int32 capacity, ::System::Int32 maxCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_5_OFFSET))(this, capacity, maxCapacity);
		}

		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_6_OFFSET))(this, info, context);
		}

		::System::Void _ctor_7(::System::Text::StringBuilder* from)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_7_OFFSET))(this, from);
		}

		::System::Void _ctor_8(::System::Int32 size, ::System::Int32 maxCapacity, ::System::Text::StringBuilder* previousBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER__CTOR_8_OFFSET))(this, size, maxCapacity, previousBlock);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void VerifyClassInvariant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_VERIFYCLASSINVARIANT_OFFSET))(this);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_MaxCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_MAXCAPACITY_OFFSET))(this);
		}

		::System::Int32 EnsureCapacity(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_ENSURECAPACITY_OFFSET))(this, capacity);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_TOSTRING_1_OFFSET))(this, startIndex, length);
		}

		::System::Text::StringBuilder* Clear()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Char get_Chars(::System::Int32 index)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_CHARS_OFFSET))(this, index);
		}

		::System::Void set_Chars(::System::Int32 index, ::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_CHARS_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Append(::System::Char value, ::System::Int32 repeatCount)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_OFFSET))(this, value, repeatCount);
		}

		::System::Text::StringBuilder* Append_1(::Il2CppArray<::System::Char>* value, ::System::Int32 startIndex, ::System::Int32 charCount)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_1_OFFSET))(this, value, startIndex, charCount);
		}

		::System::Text::StringBuilder* Append_2(::System::String* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_2_OFFSET))(this, value);
		}

		::System::Void AppendHelper(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDHELPER_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_3(::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_3_OFFSET))(this, value, startIndex, count);
		}

		::System::Text::StringBuilder* AppendLine()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_OFFSET))(this);
		}

		::System::Text::StringBuilder* AppendLine_1(::System::String* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_1_OFFSET))(this, value);
		}

		::System::Void CopyTo(::System::Int32 sourceIndex, ::Il2CppArray<::System::Char>* destination, ::System::Int32 destinationIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_COPYTO_OFFSET))(this, sourceIndex, destination, destinationIndex, count);
		}

		::System::Text::StringBuilder* Insert(::System::Int32 index, ::System::String* value, ::System::Int32 count)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_OFFSET))(this, index, value, count);
		}

		::System::Text::StringBuilder* Remove(::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REMOVE_OFFSET))(this, startIndex, length);
		}

		::System::Text::StringBuilder* Append_4(::System::Boolean value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_4_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_5(::System::SByte value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_5_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_6(::System::Byte value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_6_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_7(::System::Char value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_7_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_8(::System::Int16 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_8_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_9(::System::Int32 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_9_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_10(::System::Int64 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_10_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_11(::System::Single value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_11_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_12(::System::Double value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_12_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_13(::System::Decimal value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_13_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_14(::System::UInt16 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_14_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_15(::System::UInt32 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_15_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_16(::System::UInt64 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_16_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_17(::System::Object* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_17_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_18(::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_18_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Insert_1(::System::Int32 index, ::System::String* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_1_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_2(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_2_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_3(::System::Int32 index, ::System::SByte value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_3_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_4(::System::Int32 index, ::System::Byte value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_4_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_5(::System::Int32 index, ::System::Int16 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_5_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_6(::System::Int32 index, ::System::Char value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_6_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_7(::System::Int32 index, ::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_7_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_8(::System::Int32 index, ::Il2CppArray<::System::Char>* value, ::System::Int32 startIndex, ::System::Int32 charCount)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_8_OFFSET))(this, index, value, startIndex, charCount);
		}

		::System::Text::StringBuilder* Insert_9(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_9_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_10(::System::Int32 index, ::System::Int64 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_10_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_11(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_11_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_12(::System::Int32 index, ::System::Double value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_12_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_13(::System::Int32 index, ::System::Decimal value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_13_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_14(::System::Int32 index, ::System::UInt16 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_14_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_15(::System::Int32 index, ::System::UInt32 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_15_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_16(::System::Int32 index, ::System::UInt64 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_16_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_17(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_17_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* AppendFormat(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_OFFSET))(this, format, arg0);
		}

		::System::Text::StringBuilder* AppendFormat_1(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_1_OFFSET))(this, format, arg0, arg1);
		}

		::System::Text::StringBuilder* AppendFormat_2(::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_2_OFFSET))(this, format, arg0, arg1, arg2);
		}

		::System::Text::StringBuilder* AppendFormat_3(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_3_OFFSET))(this, format, args);
		}

		::System::Text::StringBuilder* AppendFormat_4(::System::IFormatProvider* provider, ::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_4_OFFSET))(this, provider, format, arg0);
		}

		::System::Text::StringBuilder* AppendFormat_5(::System::IFormatProvider* provider, ::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_5_OFFSET))(this, provider, format, arg0, arg1);
		}

		::System::Text::StringBuilder* AppendFormat_6(::System::IFormatProvider* provider, ::System::String* format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_6_OFFSET))(this, provider, format, arg0, arg1, arg2);
		}

		::System::Text::StringBuilder* AppendFormat_7(::System::IFormatProvider* provider, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_7_OFFSET))(this, provider, format, args);
		}

		static ::System::Void FormatError()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_FORMATERROR_OFFSET))();
		}

		::System::Text::StringBuilder* AppendFormatHelper(::System::IFormatProvider* provider, ::System::String* format, ::System::ParamsArray args)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::IFormatProvider*, ::System::String*, ::System::ParamsArray))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPENDFORMATHELPER_OFFSET))(this, provider, format, args);
		}

		::System::Text::StringBuilder* Replace(::System::String* oldValue, ::System::String* newValue)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_OFFSET))(this, oldValue, newValue);
		}

		::System::Boolean Equals(::System::Text::StringBuilder* sb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_EQUALS_OFFSET))(this, sb);
		}

		::System::Text::StringBuilder* Replace_1(::System::String* oldValue, ::System::String* newValue, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_1_OFFSET))(this, oldValue, newValue, startIndex, count);
		}

		::System::Text::StringBuilder* Replace_2(::System::Char oldChar, ::System::Char newChar)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_2_OFFSET))(this, oldChar, newChar);
		}

		::System::Text::StringBuilder* Replace_3(::System::Char oldChar, ::System::Char newChar, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACE_3_OFFSET))(this, oldChar, newChar, startIndex, count);
		}

		::System::Text::StringBuilder* Append_19(::System::Char* value, ::System::Int32 valueCount)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_19_OFFSET))(this, value, valueCount);
		}

		::System::Void Insert_18(::System::Int32 index, ::System::Char* value, ::System::Int32 valueCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_18_OFFSET))(this, index, value, valueCount);
		}

		::System::Void ReplaceAllInChunk(::Il2CppArray<::System::Int32>* replacements, ::System::Int32 replacementsCount, ::System::Text::StringBuilder* sourceChunk, ::System::Int32 removeCount, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACEALLINCHUNK_OFFSET))(this, replacements, replacementsCount, sourceChunk, removeCount, value);
		}

		::System::Boolean StartsWith(::System::Text::StringBuilder* chunk, ::System::Int32 indexInChunk, ::System::Int32 count, ::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_STARTSWITH_OFFSET))(this, chunk, indexInChunk, count, value);
		}

		::System::Void ReplaceInPlaceAtChunk(::System::Text::StringBuilder*& chunk, ::System::Int32& indexInChunk, ::System::Char* value, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*&, ::System::Int32&, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REPLACEINPLACEATCHUNK_OFFSET))(this, chunk, indexInChunk, value, count);
		}

		static ::System::Void ThreadSafeCopy(::System::Char* sourcePtr, ::Il2CppArray<::System::Char>* destination, ::System::Int32 destinationIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Char*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_OFFSET))(sourcePtr, destination, destinationIndex, count);
		}

		static ::System::Void ThreadSafeCopy_1(::Il2CppArray<::System::Char>* source, ::System::Int32 sourceIndex, ::Il2CppArray<::System::Char>* destination, ::System::Int32 destinationIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_1_OFFSET))(source, sourceIndex, destination, destinationIndex, count);
		}

		::System::Text::StringBuilder* FindChunkForIndex(::System::Int32 index)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORINDEX_OFFSET))(this, index);
		}

		::System::Text::StringBuilder* FindChunkForByte(::System::Int32 byteIndex)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORBYTE_OFFSET))(this, byteIndex);
		}

		::System::Text::StringBuilder* Next(::System::Text::StringBuilder* chunk)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_NEXT_OFFSET))(this, chunk);
		}

		::System::Void ExpandByABlock(::System::Int32 minBlockCharCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_EXPANDBYABLOCK_OFFSET))(this, minBlockCharCount);
		}

		::System::Void MakeRoom(::System::Int32 index, ::System::Int32 count, ::System::Text::StringBuilder*& chunk, ::System::Int32& indexInChunk, ::System::Boolean doneMoveFollowingChars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_MAKEROOM_OFFSET))(this, index, count, chunk, indexInChunk, doneMoveFollowingChars);
		}

		::System::Void Remove_1(::System::Int32 startIndex, ::System::Int32 count, ::System::Text::StringBuilder*& chunk, ::System::Int32& indexInChunk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_REMOVE_1_OFFSET))(this, startIndex, count, chunk, indexInChunk);
		}
	};
}
