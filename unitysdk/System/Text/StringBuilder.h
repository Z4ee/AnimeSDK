#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParamsArray.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMATHELPER_OFFSET UNITYSDK_OFFSET(0x1C8D19D0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1C8B0700)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1C8D2C10)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_3_OFFSET UNITYSDK_OFFSET(0x1C8D2C60)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_4_OFFSET UNITYSDK_OFFSET(0x1C8D2D30)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_5_OFFSET UNITYSDK_OFFSET(0x1C8D2D70)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_6_OFFSET UNITYSDK_OFFSET(0x1C8D2DC0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x1C8B06B0)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDHELPER_OFFSET UNITYSDK_OFFSET(0x1C8D0890)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_1_OFFSET UNITYSDK_OFFSET(0x1C8D0A80)
#define SYSTEM_TEXT_STRINGBUILDER_APPENDLINE_OFFSET UNITYSDK_OFFSET(0x1C8D0A10)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_10_OFFSET UNITYSDK_OFFSET(0x1C8D1430)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_11_OFFSET UNITYSDK_OFFSET(0x1C8D1470)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_12_OFFSET UNITYSDK_OFFSET(0x1C8D14B0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_13_OFFSET UNITYSDK_OFFSET(0x1C8D14F0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_14_OFFSET UNITYSDK_OFFSET(0x1C8D0780)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1C8D0600)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x1C8B6E30)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_3_OFFSET UNITYSDK_OFFSET(0x1C8D08B0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_4_OFFSET UNITYSDK_OFFSET(0x1C8D12C0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_5_OFFSET UNITYSDK_OFFSET(0x1C8D1310)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_6_OFFSET UNITYSDK_OFFSET(0x1C8D1350)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_7_OFFSET UNITYSDK_OFFSET(0x1C8B6FA0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_8_OFFSET UNITYSDK_OFFSET(0x1C8D13B0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_9_OFFSET UNITYSDK_OFFSET(0x1C8D13F0)
#define SYSTEM_TEXT_STRINGBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x1C8D00F0)
#define SYSTEM_TEXT_STRINGBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8CFF50)
#define SYSTEM_TEXT_STRINGBUILDER_EXPANDBYABLOCK_OFFSET UNITYSDK_OFFSET(0x1C8D04F0)
#define SYSTEM_TEXT_STRINGBUILDER_FINDCHUNKFORINDEX_OFFSET UNITYSDK_OFFSET(0x1C8D02F0)
#define SYSTEM_TEXT_STRINGBUILDER_FORMATERROR_OFFSET UNITYSDK_OFFSET(0x1C8D2E00)
#define SYSTEM_TEXT_STRINGBUILDER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C8CFB50)
#define SYSTEM_TEXT_STRINGBUILDER_GET_CHARS_OFFSET UNITYSDK_OFFSET(0x1C8D0320)
#define SYSTEM_TEXT_STRINGBUILDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C8CFCB0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_1_OFFSET UNITYSDK_OFFSET(0x1C8D1530)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_2_OFFSET UNITYSDK_OFFSET(0x1C8D1740)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_3_OFFSET UNITYSDK_OFFSET(0x1C8D1770)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_4_OFFSET UNITYSDK_OFFSET(0x1C8D1810)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_5_OFFSET UNITYSDK_OFFSET(0x1C8D15D0)
#define SYSTEM_TEXT_STRINGBUILDER_INSERT_OFFSET UNITYSDK_OFFSET(0x1C8D0AF0)
#define SYSTEM_TEXT_STRINGBUILDER_MAKEROOM_OFFSET UNITYSDK_OFFSET(0x1C8D0C90)
#define SYSTEM_TEXT_STRINGBUILDER_NEXT_OFFSET UNITYSDK_OFFSET(0x1C8D39B0)
#define SYSTEM_TEXT_STRINGBUILDER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1C8D11F0)
#define SYSTEM_TEXT_STRINGBUILDER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C8D1090)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACEALLINCHUNK_OFFSET UNITYSDK_OFFSET(0x1C8D3370)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACEINPLACEATCHUNK_OFFSET UNITYSDK_OFFSET(0x1C8D0F30)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1C8D2E90)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x1C8D3680)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x1C8D36B0)
#define SYSTEM_TEXT_STRINGBUILDER_REPLACE_OFFSET UNITYSDK_OFFSET(0x1C8D2E60)
#define SYSTEM_TEXT_STRINGBUILDER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C8CFB70)
#define SYSTEM_TEXT_STRINGBUILDER_SET_CHARS_OFFSET UNITYSDK_OFFSET(0x1C8D03F0)
#define SYSTEM_TEXT_STRINGBUILDER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C8CFF70)
#define SYSTEM_TEXT_STRINGBUILDER_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x1C8D3180)
#define SYSTEM_TEXT_STRINGBUILDER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C8CF8F0)
#define SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_1_OFFSET UNITYSDK_OFFSET(0x1C8D3A00)
#define SYSTEM_TEXT_STRINGBUILDER_THREADSAFECOPY_OFFSET UNITYSDK_OFFSET(0x1C8CF390)
#define SYSTEM_TEXT_STRINGBUILDER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C8CFCC0)
#define SYSTEM_TEXT_STRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8B0750)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8CEC30)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8CF0F0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C8CF0A0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C8CF150)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C8CF460)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1C8CF5C0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1C8D3AD0)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1C8D3B00)
#define SYSTEM_TEXT_STRINGBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B0650)

namespace System::Text
{
	inline static constexpr unsigned int StringBuilder_TypeDefinitionIndex = 482;

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

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_SET_CAPACITY_OFFSET))(this, value);
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

		::System::Text::StringBuilder* Append_5(::System::Byte value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_5_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_6(::System::Char value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_6_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_7(::System::Int32 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_7_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_8(::System::Int64 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_8_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_9(::System::Single value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_9_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_10(::System::Double value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_10_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_11(::System::UInt32 value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_11_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_12(::System::Object* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_12_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Append_13(::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_13_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* Insert_1(::System::Int32 index, ::System::String* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_1_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_2(::System::Int32 index, ::System::Char value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_2_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_3(::System::Int32 index, ::Il2CppArray<::System::Char>* value)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_3_OFFSET))(this, index, value);
		}

		::System::Text::StringBuilder* Insert_4(::System::Int32 index, ::Il2CppArray<::System::Char>* value, ::System::Int32 startIndex, ::System::Int32 charCount)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_4_OFFSET))(this, index, value, startIndex, charCount);
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

		::System::Text::StringBuilder* Append_14(::System::Char* value, ::System::Int32 valueCount)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_APPEND_14_OFFSET))(this, value, valueCount);
		}

		::System::Void Insert_5(::System::Int32 index, ::System::Char* value, ::System::Int32 valueCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_STRINGBUILDER_INSERT_5_OFFSET))(this, index, value, valueCount);
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
