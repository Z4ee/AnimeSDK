#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierPathSegment.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierSegment.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C61E2B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERSEGMENT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C61E840)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERSEGMENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C61E780)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C61E8C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C61E7F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C61E7A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C61E2A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61CE30)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils__SegmentsInPath_d__75_TypeDefinitionIndex = 31156;

	class VectorUtils__SegmentsInPath_d__75 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* __3__segments; // 0x10
		::System::Collections::Generic::IEnumerable_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* segments; // 0x18
		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment>* _e_5__2; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Boolean closed; // 0x2C
		::System::Boolean __3__closed; // 0x2D
		::System::Int32 __1__state; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::BezierPathSegment _s2_5__3; // 0x34
		::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment __2__current; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_MOVENEXT_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment System_Collections_Generic_IEnumerator_ToolBuddy_ThirdParty_VectorGraphics_BezierSegment__get_Current()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERSEGMENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>* System_Collections_Generic_IEnumerable_ToolBuddy_ThirdParty_VectorGraphics_BezierSegment__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::BezierSegment>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_BEZIERSEGMENT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__SEGMENTSINPATH_D__75_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
