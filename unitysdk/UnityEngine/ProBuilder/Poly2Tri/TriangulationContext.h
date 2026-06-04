#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepDebugContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class Triangulatable; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationConstraint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationDebugContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B0572E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_DONE_OFFSET UNITYSDK_OFFSET(0x1B050060)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B0598B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DTDEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B0502E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_ISDEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x1B059920)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1B059900)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATABLE_OFFSET UNITYSDK_OFFSET(0x1B0598E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B0598C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_PREPARETRIANGULATION_OFFSET UNITYSDK_OFFSET(0x1B057650)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1B059910)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATABLE_OFFSET UNITYSDK_OFFSET(0x1B0598F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1B0598D0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B0505D0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B056F70)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationContext_TypeDefinitionIndex = 35814;

	class TriangulationContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* _DebugContext_k__BackingField; // 0x20
		::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* _Triangulatable_k__BackingField; // 0x28
		::System::Int32 _StepCount_k__BackingField; // 0x30
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode _TriangulationMode_k__BackingField; // 0x34
		::System::Boolean _IsDebugEnabled_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* get_DebugContext()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DEBUGCONTEXT_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATIONMODE_OFFSET))(this);
		}

		::System::Void set_TriangulationMode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* get_Triangulatable()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATABLE_OFFSET))(this);
		}

		::System::Void set_Triangulatable(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATABLE_OFFSET))(this, a1);
		}

		::System::Int32 get_StepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_STEPCOUNT_OFFSET))(this);
		}

		::System::Void set_StepCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_STEPCOUNT_OFFSET))(this, a1);
		}

		::System::Void Done()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_DONE_OFFSET))(this);
		}

		::System::Void PrepareTriangulation(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_PREPARETRIANGULATION_OFFSET))(this, a1);
		}

		::System::Void Update(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_IsDebugEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_ISDEBUGENABLED_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* get_DTDebugContext()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DTDEBUGCONTEXT_OFFSET))(this);
		}
	};
}
