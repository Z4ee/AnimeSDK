#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/BezierPoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_1_OFFSET UNITYSDK_OFFSET(0x1A2E6710)
#define UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_2_OFFSET UNITYSDK_OFFSET(0x1A2E7180)
#define UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_OFFSET UNITYSDK_OFFSET(0x1A2E6640)
#define UNITYENGINE_PROBUILDER_SPLINE_GETCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1A2E67D0)
#define UNITYENGINE_PROBUILDER_SPLINE_GETRINGROTATION_OFFSET UNITYSDK_OFFSET(0x1A2E7D20)
#define UNITYENGINE_PROBUILDER_SPLINE_VERTEXRING_OFFSET UNITYSDK_OFFSET(0x1A2E8620)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Spline_TypeDefinitionIndex = 39994;

	class Spline : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ProBuilderMesh* Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points, ::System::Single radius, ::System::Int32 columns, ::System::Int32 rows, ::System::Boolean closeLoop, ::System::Boolean smooth)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_OFFSET))(points, radius, columns, rows, closeLoop, smooth);
		}

		static ::System::Void Extrude_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, ::System::Single radius, ::System::Int32 columns, ::System::Int32 rows, ::System::Boolean closeLoop, ::System::Boolean smooth, ::UnityEngine::ProBuilder::ProBuilderMesh*& target)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::ProBuilder::ProBuilderMesh*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_1_OFFSET))(bezierPoints, radius, columns, rows, closeLoop, smooth, target);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, ::System::Int32 subdivisionsPerSegment, ::System::Boolean closeLoop, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_GETCONTROLPOINTS_OFFSET))(bezierPoints, subdivisionsPerSegment, closeLoop, rotations);
		}

		static ::System::Void Extrude_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single radius, ::System::Int32 radiusRows, ::System::Boolean closeLoop, ::System::Boolean smooth, ::UnityEngine::ProBuilder::ProBuilderMesh*& target, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>* pointRotations)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::ProBuilder::ProBuilderMesh*&, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_EXTRUDE_2_OFFSET))(points, radius, radiusRows, closeLoop, smooth, target, pointRotations);
		}

		static ::UnityEngine::Quaternion GetRingRotation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Int32 i, ::System::Boolean closeLoop, ::System::Single& secant)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_GETRINGROTATION_OFFSET))(points, i, closeLoop, secant);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* VertexRing(::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 offset, ::System::Single radius, ::System::Int32 segments)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SPLINE_VERTEXRING_OFFSET))(orientation, offset, radius, segments);
		}
	};
}
