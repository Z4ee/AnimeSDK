#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Constraint.h"
#include "unitysdk/System/Data/DataKey.h"
#include "unitysdk/System/Data/DataRowAction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Data { class ConstraintCollection; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class Index; }

#define SYSTEM_DATA_UNIQUECONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1B3466A0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CANENABLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B346B90)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1B346690)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B346F30)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1B346670)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_1_OFFSET UNITYSDK_OFFSET(0x1B347180)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_2_OFFSET UNITYSDK_OFFSET(0x1B347B20)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B347170)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXCLEAR_OFFSET UNITYSDK_OFFSET(0x1B346600)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B346630)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B347100)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B346190)
#define SYSTEM_DATA_UNIQUECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B346A50)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B348330)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x1B3465F0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNSREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B3470F0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1B3482C0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_ISPRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x1B3482D0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x1B346B40)
#define SYSTEM_DATA_UNIQUECONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET UNITYSDK_OFFSET(0x1B346C30)
#define SYSTEM_DATA_UNIQUECONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1B346680)
#define SYSTEM_DATA_UNIQUECONSTRAINT_SET_INCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1B348340)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B346270)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B346350)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B346370)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B346390)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B3463C0)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B3464B0)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B3465A0)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B3465C0)
#define SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3460A0)

namespace System::Data
{
	inline static constexpr unsigned int UniqueConstraint_TypeDefinitionIndex = 37069;

	class UniqueConstraint : public ::System::Data::Constraint
	{
	public:
		::System::Data::DataKey _key; // 0x38
		::Il2CppArray<::System::String*>* _columnNames; // 0x40
		::System::Data::Index* _constraintIndex; // 0x48
		::System::String* _constraintName; // 0x50
		::System::Boolean _bPrimaryKey; // 0x58

		::System::Void _ctor(::System::String* name, ::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_OFFSET))(this, name, column);
		}

		::System::Void _ctor_1(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_1_OFFSET))(this, column);
		}

		::System::Void _ctor_2(::System::String* name, ::Il2CppArray<::System::Data::DataColumn*>* columns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_2_OFFSET))(this, name, columns);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Data::DataColumn*>* columns)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_3_OFFSET))(this, columns);
		}

		::System::Void _ctor_4(::System::String* name, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean isPrimaryKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_4_OFFSET))(this, name, columnNames, isPrimaryKey);
		}

		::System::Void _ctor_5(::System::String* name, ::System::Data::DataColumn* column, ::System::Boolean isPrimaryKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataColumn*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_5_OFFSET))(this, name, column, isPrimaryKey);
		}

		::System::Void _ctor_6(::System::Data::DataColumn* column, ::System::Boolean isPrimaryKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_6_OFFSET))(this, column, isPrimaryKey);
		}

		::System::Void _ctor_7(::System::String* name, ::Il2CppArray<::System::Data::DataColumn*>* columns, ::System::Boolean isPrimaryKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_7_OFFSET))(this, name, columns, isPrimaryKey);
		}

		::System::Void _ctor_8(::Il2CppArray<::System::Data::DataColumn*>* columns, ::System::Boolean isPrimaryKey)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT__CTOR_8_OFFSET))(this, columns, isPrimaryKey);
		}

		::Il2CppArray<::System::String*>* get_ColumnNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNNAMES_OFFSET))(this);
		}

		::System::Void ConstraintIndexClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXCLEAR_OFFSET))(this);
		}

		::System::Void ConstraintIndexInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXINITIALIZE_OFFSET))(this);
		}

		::System::Void CheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CHECKSTATE_OFFSET))(this);
		}

		::System::Void NonVirtualCheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET))(this);
		}

		::System::Void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::ConstraintCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET))(this, constraints);
		}

		::System::Boolean CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, ::System::Boolean fThrowException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::ConstraintCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET))(this, constraints, fThrowException);
		}

		::System::Boolean CanEnableConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CANENABLECONSTRAINT_OFFSET))(this);
		}

		::System::Boolean IsConstraintViolated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET))(this);
		}

		::System::Void CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCONSTRAINT_OFFSET))(this, row, action);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CONTAINSCOLUMN_OFFSET))(this, column);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* destination)
		{
			return ((::System::Data::Constraint*(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET))(this, destination);
		}

		::System::Data::Constraint* Clone_1(::System::Data::DataSet* destination, ::System::Boolean ignorNSforTableLookup)
		{
			return ((::System::Data::Constraint*(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_1_OFFSET))(this, destination, ignorNSforTableLookup);
		}

		::System::Data::UniqueConstraint* Clone_2(::System::Data::DataTable* table)
		{
			return ((::System::Data::UniqueConstraint*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_2_OFFSET))(this, table);
		}

		::Il2CppArray<::System::Data::DataColumn*>* get_Columns()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNS_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* get_ColumnsReference()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNSREFERENCE_OFFSET))(this);
		}

		::System::Boolean get_IsPrimaryKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_ISPRIMARYKEY_OFFSET))(this);
		}

		::System::Void Create(::System::String* constraintName, ::Il2CppArray<::System::Data::DataColumn*>* columns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CREATE_OFFSET))(this, constraintName, columns);
		}

		::System::Boolean Equals(::System::Object* key2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_EQUALS_OFFSET))(this, key2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Void set_InCollection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_SET_INCOLLECTION_OFFSET))(this, value);
		}

		::System::Data::DataTable* get_Table()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_TABLE_OFFSET))(this);
		}
	};
}
