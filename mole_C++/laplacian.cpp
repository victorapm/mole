#include "laplacian.h"

// 1-D Constructor
Laplacian::Laplacian(u16 k, u32 m, double dx)
{
    Divergence div(k, m, dx);
    Gradient grad(k, m, dx);

    // Dimensions = m+2, m+2
    *this = (sp_mat)div*(sp_mat)grad;
}

// 2-D Constructor
Laplacian::Laplacian(u16 k, u32 m, u32 n, double dx, double dy)
{
    Divergence div(k, m, n, dx, dy);
    Gradient grad(k, m, n, dx, dy);

    // Dimensions = (m+2)*(n+2), (m+2)*(n+2)
    *this = (sp_mat)div*(sp_mat)grad;
}

// 3-D Constructor
Laplacian::Laplacian(u16 k, u32 m, u32 n, u32 o, double dx, double dy, double dz)
{
    Divergence div(k, m, n, o, dx, dy, dz);
    Gradient grad(k, m, n, o, dx, dy, dz);

    // Dimensions = HUGE
    *this = (sp_mat)div*(sp_mat)grad;
}
