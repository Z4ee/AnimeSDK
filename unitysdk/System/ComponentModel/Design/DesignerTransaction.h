#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_CANCEL_OFFSET UNITYSDK_OFFSET(0x1AFDDCF0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_COMMIT_OFFSET UNITYSDK_OFFSET(0x1AFDDDC0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFDDFB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AFDDE90)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_GET_CANCELED_OFFSET UNITYSDK_OFFSET(0x1AFDDCC0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_GET_COMMITTED_OFFSET UNITYSDK_OFFSET(0x1AFDDCD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AFDDCE0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFDDF00)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFDDCB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDDC70)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerTransaction_TypeDefinitionIndex = 3048;

	class DesignerTransaction : public ::System::Object
	{
	public:
		::System::String* desc; // 0x10
		::System::Boolean canceled; // 0x18
		::System::Boolean committed; // 0x19
		::System::Boolean suppressedFinalization; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION__CTOR_1_OFFSET))(this, description);
		}

		::System::Boolean get_Canceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_GET_CANCELED_OFFSET))(this);
		}

		::System::Boolean get_Committed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_GET_COMMITTED_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_CANCEL_OFFSET))(this);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_COMMIT_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTION_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
