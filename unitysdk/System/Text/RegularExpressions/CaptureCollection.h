#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Text::RegularExpressions { class Capture; }
namespace System::Text::RegularExpressions { class Group; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x167CB3D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GETCAPTURE_OFFSET UNITYSDK_OFFSET(0x167CB1E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x167CB480)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x167CB1C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x167CB1B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x167CB1D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x167CB1A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167CB4E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x167CB180)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int CaptureCollection_TypeDefinitionIndex = 2497;

	class CaptureCollection : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Group* _group; // 0x10
		::Il2CppArray<::System::Text::RegularExpressions::Capture*>* _captures; // 0x18
		::System::Int32 _capcount; // 0x20

		::System::Void _ctor(::System::Text::RegularExpressions::Group* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Group*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Capture* get_Item(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::Capture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Capture* GetCapture(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::Capture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURECOLLECTION_GETCAPTURE_OFFSET))(this, a1);
		}
	};
}
