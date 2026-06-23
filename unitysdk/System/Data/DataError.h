#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataError_ColumnError.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_DATAERROR_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1DBD5610)
#define SYSTEM_DATA_DATAERROR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBD5370)
#define SYSTEM_DATA_DATAERROR_GETCOLUMNERROR_OFFSET UNITYSDK_OFFSET(0x1DBD55B0)
#define SYSTEM_DATA_DATAERROR_GETCOLUMNSINERROR_OFFSET UNITYSDK_OFFSET(0x1DBD56A0)
#define SYSTEM_DATA_DATAERROR_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x1DBD5270)
#define SYSTEM_DATA_DATAERROR_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DBD5470)
#define SYSTEM_DATA_DATAERROR_SETCOLUMNERROR_OFFSET UNITYSDK_OFFSET(0x1DBD52A0)
#define SYSTEM_DATA_DATAERROR_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1DBD5230)
#define SYSTEM_DATA_DATAERROR_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1DBD5250)
#define SYSTEM_DATA_DATAERROR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBD5210)
#define SYSTEM_DATA_DATAERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD5200)

namespace System::Data
{
	inline static constexpr unsigned int DataError_TypeDefinitionIndex = 38572;

	class DataError : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Data::DataError_ColumnError>* _errorList; // 0x10
		::System::String* _rowError; // 0x18
		::System::Int32 _count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* rowError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR__CTOR_1_OFFSET))(this, rowError);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_SET_TEXT_OFFSET))(this, value);
		}

		::System::Boolean get_HasErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GET_HASERRORS_OFFSET))(this);
		}

		::System::Void SetColumnError(::System::Data::DataColumn* column, ::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_SETCOLUMNERROR_OFFSET))(this, column, error);
		}

		::System::String* GetColumnError(::System::Data::DataColumn* column)
		{
			return ((::System::String*(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GETCOLUMNERROR_OFFSET))(this, column);
		}

		::System::Void Clear(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_CLEAR_OFFSET))(this, column);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_CLEAR_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* GetColumnsInError()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_GETCOLUMNSINERROR_OFFSET))(this);
		}

		::System::Void SetText(::System::String* errorText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_SETTEXT_OFFSET))(this, errorText);
		}

		::System::Int32 IndexOf(::System::Data::DataColumn* column)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAERROR_INDEXOF_OFFSET))(this, column);
		}
	};
}
