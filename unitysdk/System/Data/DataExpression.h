#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class ExpressionNode; }

#define SYSTEM_DATA_DATAEXPRESSION_BIND_OFFSET UNITYSDK_OFFSET(0x1DBD5950)
#define SYSTEM_DATA_DATAEXPRESSION_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1DBD2AD0)
#define SYSTEM_DATA_DATAEXPRESSION_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1DBD5B40)
#define SYSTEM_DATA_DATAEXPRESSION_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0x1DBD5F10)
#define SYSTEM_DATA_DATAEXPRESSION_EVALUATE_3_OFFSET UNITYSDK_OFFSET(0x1DBD5F20)
#define SYSTEM_DATA_DATAEXPRESSION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1DBD5B30)
#define SYSTEM_DATA_DATAEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DBD5AD0)
#define SYSTEM_DATA_DATAEXPRESSION_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1DBD5B20)
#define SYSTEM_DATA_DATAEXPRESSION_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1DBD66B0)
#define SYSTEM_DATA_DATAEXPRESSION_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1DBD66D0)
#define SYSTEM_DATA_DATAEXPRESSION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DBD61C0)
#define SYSTEM_DATA_DATAEXPRESSION_ISTABLEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1DBD65B0)
#define SYSTEM_DATA_DATAEXPRESSION_ISUNKNOWN_OFFSET UNITYSDK_OFFSET(0x1DBD65D0)
#define SYSTEM_DATA_DATAEXPRESSION_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DBD62D0)
#define SYSTEM_DATA_DATAEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBD57F0)
#define SYSTEM_DATA_DATAEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD57E0)

namespace System::Data
{
	inline static constexpr unsigned int DataExpression_TypeDefinitionIndex = 38632;

	class DataExpression : public ::System::Object
	{
	public:
		::System::Type* _dataType; // 0x10
		::System::Data::ExpressionNode* _expr; // 0x18
		::System::String* _originalExpression; // 0x20
		::System::Data::DataTable* _table; // 0x28
		::Il2CppArray<::System::Data::DataColumn*>* _dependency; // 0x30
		::System::Data::Common::StorageType _storageType; // 0x38
		::System::Boolean _parsed; // 0x3C
		::System::Boolean _bound; // 0x3D

		::System::Void _ctor(::System::Data::DataTable* table, ::System::String* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION__CTOR_OFFSET))(this, table, expression);
		}

		::System::Void _ctor_1(::System::Data::DataTable* table, ::System::String* expression, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION__CTOR_1_OFFSET))(this, table, expression, type);
		}

		::System::String* get_Expression()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_GET_HASVALUE_OFFSET))(this);
		}

		::System::Void Bind(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_BIND_OFFSET))(this, table);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_DEPENDSON_OFFSET))(this, column);
		}

		::System::Object* Evaluate()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_EVALUATE_OFFSET))(this);
		}

		::System::Object* Evaluate_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_EVALUATE_1_OFFSET))(this, row, version);
		}

		::System::Object* Evaluate_2(::Il2CppArray<::System::Data::DataRow*>* rows)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Data::DataRow*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_EVALUATE_2_OFFSET))(this, rows);
		}

		::System::Object* Evaluate_3(::Il2CppArray<::System::Data::DataRow*>* rows, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Data::DataRow*>*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_EVALUATE_3_OFFSET))(this, rows, version);
		}

		::System::Boolean Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_INVOKE_OFFSET))(this, row, version);
		}

		::System::Boolean IsTableAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_ISTABLEAGGREGATE_OFFSET))(this);
		}

		static ::System::Boolean IsUnknown(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_ISUNKNOWN_OFFSET))(value);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		static ::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAEXPRESSION_TOBOOLEAN_OFFSET))(value);
		}
	};
}
