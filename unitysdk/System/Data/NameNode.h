#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/ExpressionNode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_NAMENODE_BIND_OFFSET UNITYSDK_OFFSET(0x1EFD20C0)
#define SYSTEM_DATA_NAMENODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1EFD24E0)
#define SYSTEM_DATA_NAMENODE_EVAL_1_OFFSET UNITYSDK_OFFSET(0x1EFD22C0)
#define SYSTEM_DATA_NAMENODE_EVAL_2_OFFSET UNITYSDK_OFFSET(0x1EFD2420)
#define SYSTEM_DATA_NAMENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1EFD2270)
#define SYSTEM_DATA_NAMENODE_GET_ISSQLCOLUMN_OFFSET UNITYSDK_OFFSET(0x1EFD20A0)
#define SYSTEM_DATA_NAMENODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1EFD2480)
#define SYSTEM_DATA_NAMENODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1EFD24B0)
#define SYSTEM_DATA_NAMENODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x1EFD2470)
#define SYSTEM_DATA_NAMENODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x1EFD23F0)
#define SYSTEM_DATA_NAMENODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1EFD2530)
#define SYSTEM_DATA_NAMENODE_PARSENAME_OFFSET UNITYSDK_OFFSET(0x1EFD1DF0)
#define SYSTEM_DATA_NAMENODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFD2090)
#define SYSTEM_DATA_NAMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD1DC0)

namespace System::Data
{
	inline static constexpr unsigned int NameNode_TypeDefinitionIndex = 39310;

	class NameNode : public ::System::Data::ExpressionNode
	{
	public:
		::System::Data::DataColumn* _column; // 0x18
		::System::String* _name; // 0x20
		::System::Boolean _found; // 0x28

		::System::Void _ctor(::System::Data::DataTable* table, ::Il2CppArray<::System::Char>* text, ::System::Int32 start, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE__CTOR_OFFSET))(this, table, text, start, pos);
		}

		::System::Void _ctor_1(::System::Data::DataTable* table, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE__CTOR_1_OFFSET))(this, table, name);
		}

		::System::Boolean get_IsSqlColumn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_GET_ISSQLCOLUMN_OFFSET))(this);
		}

		::System::Void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_BIND_OFFSET))(this, table, list);
		}

		::System::Object* Eval()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_EVAL_OFFSET))(this);
		}

		::System::Object* Eval_1(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_EVAL_1_OFFSET))(this, row, version);
		}

		::System::Object* Eval_2(::Il2CppArray<::System::Int32>* records)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_EVAL_2_OFFSET))(this, records);
		}

		::System::Boolean IsConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_ISCONSTANT_OFFSET))(this);
		}

		::System::Boolean IsTableConstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_ISTABLECONSTANT_OFFSET))(this);
		}

		::System::Boolean HasLocalAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_HASLOCALAGGREGATE_OFFSET))(this);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_HASREMOTEAGGREGATE_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_DEPENDSON_OFFSET))(this, column);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return ((::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_OPTIMIZE_OFFSET))(this);
		}

		static ::System::String* ParseName(::Il2CppArray<::System::Char>* text, ::System::Int32 start, ::System::Int32 pos)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_NAMENODE_PARSENAME_OFFSET))(text, start, pos);
		}
	};
}
