#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }
namespace System::ComponentModel::Design { class IDesignerHost; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CBF9340)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CBF9150)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CBF9230)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CBF9450)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CBF9420)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1CBF9430)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1CBF9440)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CBF9530)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBF9140)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF9090)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerCollection_TypeDefinitionIndex = 3055;

	class DesignerCollection : public ::System::Object
	{
	public:
		::System::Collections::IList* designers; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::ComponentModel::Design::IDesignerHost*>* designers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::Design::IDesignerHost*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION__CTOR_OFFSET))(this, designers);
		}

		::System::Void _ctor_1(::System::Collections::IList* designers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION__CTOR_1_OFFSET))(this, designers);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::ComponentModel::Design::IDesignerHost* get_Item(::System::Int32 index)
		{
			return ((::System::ComponentModel::Design::IDesignerHost*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
