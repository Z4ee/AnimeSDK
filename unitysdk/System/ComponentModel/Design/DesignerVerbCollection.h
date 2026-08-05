#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System { class Object; }
namespace System::ComponentModel::Design { class DesignerVerb; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1DEB31E0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1DEB2E60)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DEB3100)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DEB3460)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DEB3620)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DEB2F10)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DEB3380)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1DEB3290)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1DEB3720)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONINSERT_OFFSET UNITYSDK_OFFSET(0x1DEB3710)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1DEB3730)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONSET_OFFSET UNITYSDK_OFFSET(0x1DEB3700)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1DEB3740)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DEB3540)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DEB3020)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB2DB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB2D10)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerVerbCollection_TypeDefinitionIndex = 3051;

	class DesignerVerbCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::ComponentModel::Design::DesignerVerb*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::Design::DesignerVerb*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::ComponentModel::Design::DesignerVerb* get_Item(::System::Int32 index)
		{
			return ((::System::ComponentModel::Design::DesignerVerb*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::ComponentModel::Design::DesignerVerb* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ComponentModel::Design::DesignerVerb*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::ComponentModel::Design::DesignerVerb* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::Design::DesignerVerb*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::Il2CppArray<::System::ComponentModel::Design::DesignerVerb*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::Design::DesignerVerb*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::System::ComponentModel::Design::DesignerVerbCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::DesignerVerbCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::ComponentModel::Design::DesignerVerb* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ComponentModel::Design::DesignerVerb*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Int32 IndexOf(::System::ComponentModel::Design::DesignerVerb* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ComponentModel::Design::DesignerVerb*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::ComponentModel::Design::DesignerVerb* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::Design::DesignerVerb*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void Remove(::System::ComponentModel::Design::DesignerVerb* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::DesignerVerb*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_REMOVE_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::ComponentModel::Design::DesignerVerb*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::Design::DesignerVerb*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void OnSet(::System::Int32 index, ::System::Object* oldValue, ::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONSET_OFFSET))(this, index, oldValue, newValue);
		}

		::System::Void OnInsert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONINSERT_OFFSET))(this, index, value);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONREMOVE_OFFSET))(this, index, value);
		}

		::System::Void OnValidate(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERVERBCOLLECTION_ONVALIDATE_OFFSET))(this, value);
		}
	};
}
