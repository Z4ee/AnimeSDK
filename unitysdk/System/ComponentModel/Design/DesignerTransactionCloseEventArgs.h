#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS_GET_LASTTRANSACTION_OFFSET UNITYSDK_OFFSET(0x1B1E4A70)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS_GET_TRANSACTIONCOMMITTED_OFFSET UNITYSDK_OFFSET(0x1B1E4A60)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E4A00)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E49A0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerTransactionCloseEventArgs_TypeDefinitionIndex = 3049;

	class DesignerTransactionCloseEventArgs : public ::System::EventArgs
	{
	public:
		::System::Boolean lastTransaction; // 0x10
		::System::Boolean commit; // 0x11

		::System::Void _ctor(::System::Boolean commit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS__CTOR_OFFSET))(this, commit);
		}

		::System::Void _ctor_1(::System::Boolean commit, ::System::Boolean lastTransaction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS__CTOR_1_OFFSET))(this, commit, lastTransaction);
		}

		::System::Boolean get_TransactionCommitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS_GET_TRANSACTIONCOMMITTED_OFFSET))(this);
		}

		::System::Boolean get_LastTransaction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNERTRANSACTIONCLOSEEVENTARGS_GET_LASTTRANSACTION_OFFSET))(this);
		}
	};
}
